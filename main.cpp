#include <iostream>
#include "Header.h"

using namespace std;



int main()
{
    int size;
    cout << "Say us size of array: " << endl;
    cin >> size;
    int array[size];

    SmallestAndHigherNumber(array, size);
    return 0;
}


