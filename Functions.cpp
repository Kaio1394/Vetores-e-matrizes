#include <iostream>
#include <array>
#include <vector>

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


void SmallestAndHigherNumber(vector<int> array){
    int max, min, sizeArray;
    max = array[0];
    min = array[0];
    for(int i = 0; i < array.size(); i++){
        if(array[i] > max){
            max = array[i];
        }

        if(array[i] < min){
            min = array[i];
        }
    }


    cout << "Higher number: " << max << endl;
    cout << "Smallest number: " << min << endl;
    cout << "Size of array: " << array.size() << endl;
    cout << "Size of array: " << array[3] << endl;

}

