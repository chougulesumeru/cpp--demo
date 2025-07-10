//to search a element from an array
#include<iostream>
using namespace std;

int search_element(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;

        }
    }
        return -1;
         //if element is not found
}

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;

    cout <<search_element(arr,n,x);

    return 0;
}