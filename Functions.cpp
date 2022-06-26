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

}


void DuplicateVector(int *array, int tam){
    for(int i = 0; i < tam; i++){
        array[i] = 2 * array[i];
    }
}

int* InverterVector(int* array, int tam)
{
    /*
         ArrayInvertido[0] = array[6];
         ArrayInvertido[1] = array[5];
         ArrayInvertido[2] = array[4];
         ArrayInvertido[3] = array[3];
    */
    int j = 0;
    static int ArrayInvertido[10];
    for(int i = tam - 1; i >= 0; i--){
        ArrayInvertido[j] = array[i];
        j++;
    }
    return ArrayInvertido;
}

void ShowVector(int array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << array[i] << endl;
    }
}

void ShowVector(int* array[], int tam){
    cout << "[";
    for(int i = 0; i < tam; i++){
        cout << array[i] << " ";
    }
    cout << "]";
}


