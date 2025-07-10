//to find zeros in given array

#include<iostream>
using namespace std;

int count_zeros(int arr[],int n) 
{
    for(int i=0;i<n;i++) 
    {
        if(arr[i]==0)
        {
            return n-i;
        }
    }

    return 0;  //no zeros found
} 

int main()
{
    int arr[]={1,1,1,0,0};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout << count_zeros(arr,n);

    return 0;
}