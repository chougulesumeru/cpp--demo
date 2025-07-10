// multilevel inheritance in cpp

#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    void print_vehicle()
    {
        cout << "this is vehicle base class " << endl;
    }
};

class fourWheeler : public vehicle
{
public:
    void print_fourwheeler()
    {
        cout << "this is first derived class from base class" << endl;
    }
};

class suv : public fourWheeler
{
public:
    void print_suv()
    {
        cout << "this is another derived class which is already derived from base class" << endl;
    }
};

int main()
{
    suv s;

    s.print_vehicle();
    s.print_fourwheeler();
    s.print_suv();

    return 0;
}