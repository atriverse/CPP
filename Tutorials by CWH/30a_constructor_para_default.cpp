/*
Parameterized and Default Constructors in C++

Parameterized constructors are those constructors that take one or more parameters. Default constructors are those constructors that take no parameters. This could have helped in the above example by passing the employee name at the time of definition only. That should have removed the setName function.

*/

/*
Constructor Overloading in C++
Constructor overloading is a concept similar to function overloading. Here, one class can have multiple constructors with different parameters. At the time of definition of an instance, the constructor, which will match the number and type of arguments, will get executed.

For example, if a program consists of 3 constructors with 0, 1, and 2 arguments and we pass just one argument to the constructor, the constructor which is taking one argument will automatically get executed. 
*/

/*
Constructors with Default Arguments in C++
Default arguments of the constructor are those which are provided in the constructor declaration. If the values are not provided when calling the constructor the constructor uses the default arguments automatically. 

An example that shows declaring default arguments is

class Employee
{
 
public:
    Employee(int a, int b = 9);
};

*/

/*
Copy Constructor in C++
A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a copy constructor. If no copy constructor is written in the program compiler will supply its own copy constructor. 

 

The syntax for declaring a copy constructor is

class class_name
{
    int a;
 
public:
    //copy constructor
    class_name(class_name &obj)
    {
        a = obj.a;
    }
};

*/

// C++ program to illustrate the use of copy constructor
#include <iostream>
#include <string.h>
using namespace std;

// Class definition for 'student'
class student {
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor
    student(int, string, double);
    // Copy constructor
    student(student& t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }
    // Function to display student details
    void display();
};

// Implementation of the parameterized constructor
student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

// Implementation of the display function
void student::display()
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
    // Create student object with parameterized constructor
    student s(1001, "Manjeet", 10000);
    s.display();

    // Create another student object using the copy
    // constructor
    student manjeet(s);
    manjeet.display();

    return 0;
}
