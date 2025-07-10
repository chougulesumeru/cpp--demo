// comparing two strings in cpp
#include <iostream>
using namespace std;

void compare_string(string s1, string s2)
{
    if (s1 != s2)
    {
        if (s1 > s2)
        {
            cout << s1 << " " << "greater than" <<" "<< s2 << endl;
        }
        else
        {
            cout << s2 << " " << "greater than " <<" "<< s1 << endl;
        }
    }
    else
    {
        cout << s1 << "is eqaul to " << s2 << endl;
    }
}

void inbuilt_compare(string a, string b)
{
    int c=a.compare(b);

    if(c!=0)
    {
        if(c>0)
        {
            cout << a << " " << "is greater than" << " "<< b << endl;
        }
        else{
            cout << b <<" " << "is greater than" << " " << a << endl;
        }
    }
    else{
        cout << a << "is eqaul to" << b << endl;
    }
}

int main()
{
    string s1 = "sumeru";
    string s2 = "chougule";
    compare_string(s1, s2);

    string a="shiban";
    string b="attar";
    inbuilt_compare(a,b);

    return 0;
}