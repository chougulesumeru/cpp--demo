/*
authoR:- sumeru sunil chougule 
date:- 26/06/2025
meomary management 
*/

//synatx:- relloc(ptr,new_size)

#include<iostream>
using namespace std;

int main()
{
    int *ptr=(int*)malloc(5*sizeof(int));

    //resize the meomary block

    ptr=(int*)realloc(ptr,10*sizeof(int));

    //check allocation failure
    if(ptr==NULL)
    {
        cout << "allocation failed";
        exit(0);
    }

    return 0;
}

