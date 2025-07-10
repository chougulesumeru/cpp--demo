// hierarchical inheritance

#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    void print_vehicle()
    {
        cout << "this is a vehicle base class" << endl;
    }
};

class car : public vehicle
{
public:
    void print_car()
    {
        cout << "the vehicle is car" << endl;
    }
};

class bus : public vehicle
{
public:
    void print_bus()
    {
        cout << "the vehicle is bus" << endl;
    }
};

int main()
{
    bus b;
    b.print_vehicle();
    b.print_bus();

    car c;
    c.print_vehicle();
    c.print_car();
    return 0;
}