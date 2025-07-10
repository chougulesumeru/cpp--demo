/*
author:- sumeru sunil chougule
date:- 26/06/2025
new operator
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declare pointer to store
    int *nptr;
    // allocate and initize an array with elemnt of 5 integers

    nptr = new int[5]{1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << nptr[i] << " ";
    }

    return 0;
}