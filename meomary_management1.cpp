
/*
author:- sumeru sunil chougule
date:- 25/06/2025
malloc meomary management
*/

#include <iostream>
using namespace std;

int main()
{
    int *ptr = (int *)malloc(sizeof(int) * 5); // define size of malloc data

    if (ptr == NULL)
    {
        cout << "the allocation failed";

        exit(0);
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}