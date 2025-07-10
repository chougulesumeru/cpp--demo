//swap function is support almost all data structure 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1={1,2,3,4};
    vector<int> v2={6,7,8,9};
    //swapping of two numbers
    swap(v1,v2);

    cout<< "v1:- ";

    for (auto i :v1)
       cout << i << " ";
    cout << endl;

    cout << "v2 :- ";

    for (auto i: v2) 
        cout << i << " ";

    return 0;
    
} 