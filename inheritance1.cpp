// inheritance in c++

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int id_p;

    base(int x = 37) : id_p(x) {}

    void printId_p()
    {
        cout << " Base Id: " << id_p << endl;
    }
};

class derived : public base
{
public:
    int id_c;

    derived(int y = 38) : id_c(y) {}

    void printId_c()
    {
        cout << "Derived id :" << id_c << endl;
    }
};

int main()
{
    derived d1;

    d1.id_p = 38;
    d1.printId_p();
    d1.id_c = 37;
    d1.printId_c();

    return 0;
}