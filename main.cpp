#include <iostream>

using namespace std;

int main()
{
    int size, element, max = 0, min = 0;

    cout << "Size of vector: " << endl;
    cin >> size;
    int array[size];
    for(int i = 0; i < size; i++){
        cout << "Say us one number: " << endl;
        cin >> element;
        array[i] = element;

        bool arrayIsNull = array == NULL ? true : false;

        if(arrayIsNull){
            max = element;
            min = element;
        }

        if(array[i] > max){
            max = array[i];
        }

        if(array[i] < min){
            min = array[i];
        }
    }

    cout << "---------------" << endl;
    cout << "Value of array: " << endl;
    for(int x : array){
        cout << x << endl;
    }
    cout << "Higher number: " << max << endl;
    cout << "Smallest number: " << min << endl;
    return 0;
}
