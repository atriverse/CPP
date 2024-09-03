/*
Enums
Enum or enumeration is a user-defined data type.  Enums have named constants that represent integral values.  Enums are used to make the program more readable and less complex. It lets us define a fixed set of possible values and later define variables having one of those values.

Creating an Enum element
We use the enum keyword to define the enum.

The syntax for defining a union is,

enum enum_name
{
    element1,
    element2,
    element3
};
*/

#include <iostream>
using namespace std;

enum Meal
{
    breakfast,
    lunch,
    dinner
};

int main()
{
    /*
    Initialising and using enum elements
    Since every enum element gets assigned a value to it, they could be used to compare if a particular variable store the same value.
    */
    Meal m1 = dinner;
    if (m1 == 2)
    {
        cout << "The value of dinner is " << dinner << endl;
    }
}
