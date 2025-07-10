// hybrid inheritance in c++

#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    void print_vehicle()
    {
        cout << "this is a vehicle class " << endl;
    }
};

class fourWheeler
{
public:
    void print_fourWheeler()
    {
        cout << "this is fourwheeler class" << endl;
    }
};

class car : public vehicle
{
public:
    void print_car()
    {
        cout << "this is a car class" << endl;
    }
};

class bus : public fourWheeler, public vehicle
{
public:
    void print_bus()
    {
        cout << "this is a bus class " << endl;
    }
};

int main()
{
    // create a object with bus class
    bus b;

    b.print_bus();
    b.print_fourWheeler();
    b.print_vehicle();

    // create a object with car class

    car c;
    c.print_car();
    c.print_vehicle();

    return 0;
}