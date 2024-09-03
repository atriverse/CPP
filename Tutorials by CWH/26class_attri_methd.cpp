/*
Class Attributes & Methods

Class attributes and methods are variables and functions that are defined inside the class. They are also known as class members altogether.
*/

#include <iostream>
using namespace std;

// class Employee
// {
//     int eID;
//     string eName;
//     public:
// };


// int main()
// {
//     Employee Harry;
// }

/*
A class named Employee is built and two members, eId and eName are defined inside the class. These two members are variables and are known as class attributes. Now, an object named Harry is defined in the main. Harry can access these attributes using the dot operator. But they are not accessible to Harry unless they are made public.
*/

class Employee
{
public:
    int eID;
    string eName;
};


int main()
{
    Employee Harry;
    Harry.eID = 5;
    Harry.eName = "Harry";
    cout << "Employee having ID " << Harry.eID << " is " << Harry.eName << endl;
}

/*
Class methods are nothing but functions that are defined in a class or belong to a class. Methods belonging to a class are accessed by their objects in the same way that they access attributes. Functions can be defined in two ways so that they belong to a class.
*/


/*
Defining inside the class
An example that demonstrates defining functions inside classes is

class Employee
{
public:
    int eID;
    string eName;

    void printName()
    {
        cout << eName << endl;
    }
};
 

Defining outside the class
Although, a function can be defined outside the class, it needs to be declared inside. Later, we can use the scope resolution operator (::) to define the function outside.

An example that demonstrates defining functions outside classes is

class Employee
{
public:
    int eID;
    string eName;

    void printName();
};


void Employee::printName()
{
    cout << eName << endl;
}
*/