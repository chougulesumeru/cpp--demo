//Encapsulation in c++

#include<iostream>
using namespace std;

class Person
{
    //private members that will be hidden 
    int socialId;
    string name;

    public:

    //public memebers are accessible

    Person(string n, int id)
    {
        name=n;
        socialId=id;
    }

    string getname()
    {
        return name;
    }
    
    bool validId()
    {
        if(socialId <=1001 && socialId>0)
        {
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    Person p1("shiban",24);

    cout << p1.getname() << endl;;
    cout << p1.validId() << endl;;

    return 0;
}