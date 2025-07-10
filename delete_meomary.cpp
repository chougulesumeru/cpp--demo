/*

*/

#include<iostream>
using namespace std;

int main()
{
    int *ptr;

    ptr=new int(10);

    if(!ptr)
    {
        cout << "allocation failed";
        exit(0);
    }

    cout << "the value of ptr =" << *ptr << endl;

    delete ptr;

    //allocate an array
    ptr= new int[3]{1,2,3};

    cout << "array :- ";
    for(int i=0;i<3;i++)
    {
        cout << ptr[i] << " ";
    }

    //deallocate when done

    delete[] ptr;

    return 0;
}