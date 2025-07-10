// single inheritance

#include <bits/stdc++.h>
using namespace std;

// base class-1
class LandVehicle
{
public:
    void print_land()
    {
        cout << "this is a LandVehicle class" << endl;
    }
};

// base class-2
class WaterVehicle
{
public:
    void print_water()
    {
        cout << "this is WaterVehicle class" << endl;
    }
};

// sub class derived from 2 base class

class AmVehicle : public WaterVehicle, public LandVehicle
{
public:
    void printAm()
    {
        cout << "this is AmphibiousVehicle class" << endl;
    }
};

int main()
{
    AmVehicle a;

    a.print_land();
    a.print_water();
    a.printAm();
    return 0;
}