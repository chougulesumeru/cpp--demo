/*
author:- sumeru sunil chougule
date:- 30/06/2025
Abstraction in cpp
*/

// access specifiers are the main pillers of implementing abstraction in c++

#include <bits/stdc++.h>
using namespace std;

class Abstraction
{
private:
    string name;
    int id;

public:
    void set_data(string n, int i)
    {
        name = n;
        id = i;
    }

    void get_data()
    {
        cout << "Employee name:-  " << name << endl;
        cout << "Employee Id:- " << id << endl;
    }
};

int main()
{
    Abstraction ab;

    ab.set_data("shiban", 200537);
    ab.get_data();

    return 0;
}