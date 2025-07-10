/*
author:- sumeru sunil chougule
date:- 26/06/2025
practice problem
*/

// consider one scenarion where we having issue with fixed size array

#include <iostream>
using namespace std;

int main()
{
    // initially allocate meomary for 5 intergers
    int *ptr = (int *)malloc(5 * sizeof(int));

    // check if allocation was successful
    if (ptr == NULL)
    {
        cout << "meomary allocation failed" << endl;
        exit(0);
    }

    // we need to store 8 integers
    // reaalocate to store 8 integers

    ptr = (int *)realloc(ptr, 8 * sizeof(int));

    // check if reallocation was succesful
    if (ptr == NULL)
    {
        cout << "reallocation failed" << endl;
        exit(0);
    }

    // assume we only use 5 element srow
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    // shrink the array back to 5 elemnts
    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    // check if ahrinking is succesful
    if (ptr == NULL)
    {
        cout << "meomary reallocation failed" << endl;
        exit(0);
    }

    cout << "array is :- ";
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }

    free(ptr);

    return 0;
}