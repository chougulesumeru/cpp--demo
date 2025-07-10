// quiz

#include <iostream>
using namespace std;

int i;
class A
{
public:
    // desrtuctor function
    ~A()
    {
        i = 10;
    }
};

//create a foo funtion and in that create a object of class A 
int foo()
{
    i = 3;
    A obj;

    return i;
}

int main()
{
    cout << foo() << endl;

    return 0;
}