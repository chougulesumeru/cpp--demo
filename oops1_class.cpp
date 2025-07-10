//clases and objects and cpp

#include<iostream>
using namespace std;

//data members:-  variables defined inside the class
//member function:- function declared inside the class. referred as member method

class car 
{   
public:
    string model;
    int year;

    void data()
    {
        cout << " bike model :- " << model << endl;
        cout << " Year of manufacturing :- " << year << endl;
    }
};

int main()
{   

    //object:- classname objectname
    car c1;
    c1.model="Thunderbird 350X";
    c1.year=2020;

    c1.data();

    return 0;
}