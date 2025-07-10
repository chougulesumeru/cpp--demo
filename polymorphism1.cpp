// polymorphism in c++

/*
types of polymorphism
1) compile time polymorphism/early binding/static polymorphism :-
        -function overloading
        -operator overloading
2) run-time polymorphism

*/

// function overloading:- 2 or more function have same name but behave differently.
// function overriding:- deried class defines 1 or more member function of base class.

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    // make a virtual function
    virtual void display()
    {
        cout << "Base class function";
    }
};

class derived : public base
{
public:
    void display() override
    {
        cout << "Derived class function";
    }
};

int main()
{
    base *bptr;

    derived d;

    bptr = &d;

    bptr->display();

    return 0;
}
