//to find the sum of array 
#include<iostream>
using namespace std;

int main()
{
    int arr[]={54,43,2,1,5};

    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        
    }
    cout << sum ;

    return 0;
}