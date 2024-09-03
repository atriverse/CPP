/*
C++ Inheritance

What is Inheritance in C++?
The concept of reusability in C++ is supported using inheritance. We can reuse the properties of an existing class by inheriting it and deriving its properties. The existing class is called the base class and the new class which is inherited from the base class is called the derived class.



The syntax for inheriting a class is

// Derived Class syntax
class derived_class_name : access_modifier base_class_name
{
    // body of the derived class
}
*/

// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal
{

public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal
{

public:
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main()
{
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
}

/*
Types of inheritance in C++
    Single Inheritance
    Multiple Inheritance
    Hierarchical Inheritance
    Multilevel Inheritance
    Hybrid Inheritance
*/