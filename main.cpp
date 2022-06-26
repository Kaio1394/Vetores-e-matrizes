#include <iostream>
#include "Header.h"
#include <vector>

using namespace std;


int main()
{
    int array[] = {5, 2, 11, 1, 20, 13};

    //DuplicateVector(array, 6);
    //ShowVector(array, 6);
    ShowVector(InverterVector(array, 6), 6);
    return 0;
}


