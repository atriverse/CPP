/*
C++ Constructors

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of their class. Constructors are automatically invoked whenever an object is created.

Characteristics of Constructors in C++
A constructor should be declared in the public section of the class.
They are automatically invoked whenever the object is created.
They cannot return values and do not have return types.
It can have default arguments.
*/
#include <iostream>
using namespace std;
 
class Employee
{
 
public:
    static int count; //returns number of employees
    string eName;
 
    //Constructor
    Employee()
    {
        count++; //increases employee count every time an object is defined
    }
 
    void setName(string name)
    {
        eName = name;
    }
 
    static int getCount()
    {
        return count;
    }
};
 
int Employee::count = 0; //defining the value of count
 
int main()
{
    Employee Harry1;
    Employee Harry2;
    Employee Harry3;
    cout << Employee::getCount() << endl;
}
