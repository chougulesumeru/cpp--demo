//array and pointer in cpp
#include<iostream>
using namespace std;

//pass array to the function 
void size_array_notation(int array3[5]){}

void unsize_array_notation(int array3[]){}

void pointer_notation(int *array3){}

int main()
{
    int arr[5];

    cout << arr << endl;

    cout << &arr[0] << endl;

    int array2[]={2,4,6,8,10,12};

    int *ptr=array2;
    cout << ptr << endl;

    for (int i=2;i<=12;i=i+2)
    {
        cout << *(ptr+i) <<" " << endl;;
    }

    cout << "to find size of array :- " << endl;
//to find size of array3 
    int array3[]={1,2,3,4,5};

    int n=sizeof(array3)/sizeof(array3[0]);

    size_array_notation(array3,n);
    unsize_array_notation(array3,n);
    pointer_notation(array3,n);
}