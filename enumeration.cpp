//enumeration in cpp 
//user defined data type 

#include<iostream>
using namespace std;

enum direction{
    east,west,north=1,south
};

enum class days { 
    monday=1,tuesday,wensday,thursday,friday,saturday,sunday
};
int main()
{
      direction d=east;
      cout << d << endl;
      
      d=north;
      cout << d << endl;

      d=south;
      cout << d << endl;

      //initiliation days

      days today=days:: wensday;

      cout << static_cast<int>(today) << endl;

      return 0;
}