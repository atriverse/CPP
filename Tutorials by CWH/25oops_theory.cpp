/*
C++ OOP Basics
What is OOP?
OOP stands for Object-Oriented Programming. An object-oriented programming language uses objects in its programming. Programming with object-oriented concepts aims to emulate real-world concepts such as inheritance, polymorphism, abstraction, etc, in a program.

C++ language was designed with the main intention of adding object-oriented programming to C language. As the size of the program increases, the readability, maintainability, and bug-free nature of the program decrease. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

This was the major problem with languages like C which relied upon functions or procedures (hence the name procedural programming language). As a result, the possibility of not addressing the problem adequately was high. Also, data was almost neglected, and data security was easily compromised Using classes solves this problem by modeling the program as a real-world scenario.


Difference between Procedure Oriented Programming and Object-Oriented Programming
Procedure Oriented Programming

Consists of writing a set of instructions for the computer to follow
The main focus is on functions and not on the flow of data
Functions can either use local or global data
Data moves openly from function to function
Object - Oriented Programming

Works on the concept of classes and object
A class is a template to create objects
Treats data as a critical element
Decomposes the problem in objects and builds data and functions around the objects
Basically, procedural programming involves writing procedures or functions that manipulate data, while object-oriented programming involves creating objects that contain both data and functions.

Basic Elements in Object-Oriented Programming
Classes - Basic template for creating objects. This is the building block of object-oriented programming.
Objects – Basic run-time entities and instances of a class.
Data Abstraction & Encapsulation – Wrapping data and functions into a single unit
Inheritance – Properties of one class can be inherited into others
Polymorphism – Ability to take more than one form
Dynamic Binding – Code which will execute is not known until the program runs
Message Passing – message (Information) call format

Benefits of Object-Oriented Programming
Object-oriented programming has many advantages. Listed below are a few.

Programs involving OOP is faster and easier to execute.
By using objects and inheritance, it provides a clear structure for programs and improves code reusability.
It makes the code easier to maintain, modify and debug.
Principle of data hiding helps build secure systems
Multiple Objects can co-exist without any interference
Software complexity can be easily managed so that even the creation of fully reusable software with less code and shorter development time is possible.
*/

/*
C++ Classes & Objects
Classes
Classes and structures are somewhat the same but still, they have some differences. For example, we cannot hide data in structures which means that everything is public and can be accessed easily which is a major drawback of the structure because structures cannot be used where data security is a major concern. Another drawback of structures is that we cannot add functions to them.

Classes are user-defined data types and are a template for creating objects. Classes consist of variables and functions which are also called class members.

We use the class keyword to define a class in C++.


The syntax of a class in C++ is

class class_name
{
    //body of the class
};


Objects
Objects are instances of a class. To create an object, we just have to specify the class name and then the object’s name. Objects can access class attributes and methods which are bound to the class definition. It is recommended to put these attributes and methods in access modifiers so that their permissions can be better specified to allow them to be used by objects.


The syntax for defining an object in C++ is

class class_name
{
    //body of the class
};

int main()
{
    class_name object_name; //object
}
*/

// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room
{

public:
    double length;
    double breadth;
    double height;

    double calculate_area()
    {
        return length * breadth;
    }

    double calculate_volume()
    {
        return length * breadth * height;
    }
};

int main()
{

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculate_area() << endl;
    cout << "Volume of Room =  " << room1.calculate_volume() << endl;

    return 0;
}