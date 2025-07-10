/*
author:- sumeru sunil chougule
date:- 25/06/2025
problem :- calloc() meomary management
*/

//syntax:- calloc(n,size)

#include<iostream>
using namespace std;

int main()
{
    int *ptr=(int *)calloc(5 sizeof(int));

    if(ptr=NULL)
    {
        cout << "allocation failed";
        exit(0);
    }

    for(int i=0;i<5;i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}