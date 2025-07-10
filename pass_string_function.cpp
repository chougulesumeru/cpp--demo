//pass the string to the function 

#include<iostream>
#include<string.h>
using namespace std;

void string_pass(string str)
{   
    cout << str;
}

int main()
{
    string str="sumeru";

    //passing the stirng
    string_pass(str);
    
    for(int i=0; i< str[i];i++)
    {
        cout << i << endl;
    }

    return 0;
}