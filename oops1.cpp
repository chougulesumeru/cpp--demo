//oops in cpp

//class:- share common properties and behaviour


#include<iostream>
#include<string.h>
using namespace std;

class animal()
{
    public:
    string species;
    int age;
    int name;

    //memeber functions

    void eat()
    {

    }

    void sleep()
    {

    }

    void makesound()
    {

    }
}

//object can take up meomary in space and stored record like pascal or union or structure

//encapsulation:- wrapping up data in a single unit 
//enacapsulation is defined as bindinf together data and the functions that manipulate them together in single class


//abstrction :- displaying only essential infirmation and ignoring other details
//data abstraction refers to provide only essential information about data to the outside world


/*
polymorphism :- many forms
 behave different in different situaltion 

 for e.eg. makesound() method behaves different depend on animal

 3 type sof polymorphism :- 

 operator overloading :- different behaviour in different instances
 function overloading  :- using single function name to perform differnt types of function 
 function overriding :- changing behaviour of function that derived from base class using inheritance
*/

/*
inheritance:- 
derive properties and characteritics to another class is inheritance
most imp. feature in oops c++

sub-class:- the class that inherits propeties from another class
super-class/base-class:-  the class whose properties are inherited to the sub-class 

*/

/*
advantages oops :- 

modularity and reusability: through classes and reusability using objects
data encapsulation:- oops encapsulate data witin object
*/