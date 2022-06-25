#include <iostream>
using namespace std;
void SmallestAndHigherNumber(int array[], int size){
    int element, max = 0, min = 0;
    array[size];
    for(int i = 0; i < size; i++){
        cout << "Say us one number: " << endl;
        cin >> element;
        array[i] = element;

        bool arrayIsNull = array == NULL ? true : false;

        if(arrayIsNull){
            max = element;
            min = element;
        }

        else if(array[i] > max){
            max = array[i];
        }

        else if(array[i] < min){
            min = array[i];
        }
    }
    cout << "Higher number: " << max << endl;
    cout << "Smallest number: " << min << endl;

}
