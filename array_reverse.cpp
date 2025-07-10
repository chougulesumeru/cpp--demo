//to print array in reverse way 

#include<iostream>
using namespace std;

int main()
{
    int array[]={54,43,2,1,5};

    //to find size of array

    int n =sizeof(array)/sizeof(array[0]);
    cout << n << endl;

    for(int i=n-1;i>=0;i--)
    {
        cout << array[i] << " ";
    }

}