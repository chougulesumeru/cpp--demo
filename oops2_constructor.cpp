/*
author:- sumeru sunil chougule
date:- 27/06/2025
Oops in C++
*/

// classes are user defined data types which holds own data member and member functions/methods

/*
special memeber function
constrcutor:-
they are used to construct object and making them ready to use.
note:- Constructor have name as class.
*/

/*
destructor is another type of special function
called when object goes out of scope.
it deallocates all the meomary previously used by the object so there will be no meomary leak.
note:- the destructor also has the same name as the class but in tilde form (~).
*/

/*friends class and function allows acces to the
private and protected memebers to other class
*/
#include <iostream>
using namespace std;

class data
{
public:
    static void printHello();
    static int age;

    data()
    {
        cout << " constructor called!" << endl;
    }

    ~data()
    {
        cout << "destructor called!" << endl;
    }
};

int data::age = 24;

void data::printHello()
{
    cout << "Hello! Shiban" << endl;
}

int main()
{
    data d;

    cout << data::age << endl;
    data::printHello();

    return 0;
}