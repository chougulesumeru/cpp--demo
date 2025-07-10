//swap the arrays 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7,8};

    //swap the arrays
    swap(arr1,arr2);
    
    cout << "arr1 :- ";
    for (int i : arr1)
        cout << i << " ";
    cout << endl;
    
    cout << "arr2 :- ";
    for (int i: arr2)
        cout << i << " ";

    return 0;


}