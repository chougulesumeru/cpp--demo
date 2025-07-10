/*
author:- sumeru sunil chougule
date:- 26/06/2025
meomary management 
*/

#include<iostream>
using namespace std;

int main()
{
    int *ptr=(int*)calloc(5,sizeof(int));

  
    //print the array
    cout << " array :- ";
    for(int i=0;i<5;i++)
    {
        cout << ptr[i] << " ";
    }

    free(ptr);
    ptr=NULL;

    return 0;
}