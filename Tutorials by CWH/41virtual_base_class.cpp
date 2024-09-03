/*
Virtual base class in C++

Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances. 

Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is inherited by two other classes B and C. Both these class are inherited into another in a new class D

                        Class A
                           |
                  _________|___________
                 |                     |
                 Class B             Class C
                 |_____________________|
                           |
                        Class D

As we can see from the figure that data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error.                            
*/

#include <bits/stdc++.h>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(const string& name) : name(name) {}
    void display() { cout << "\nName: " << name << endl; }
};

// Derived class 1: Employee
class Employee : virtual public Person {
protected:
    int employeeId;

public:
    Employee(const string& name, int id)
        : Person(name), employeeId(id) {}
    void displayEmployee() {
        display();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Method inside Derived Class Employee" << endl;
    }
};

// Derived class 2: Student
class Student : virtual public Person {
protected:
    int studentId;

public:
    Student(const string& name, int id)
        : Person(name), studentId(id) {}
    void displayStudent() {
        display();
        cout << "Student ID: " << studentId << endl;
        cout << "Method inside Derived Class Student" << endl;
    }
};

// Derived class 3: StudentIntern (Multiple Inheritance)
class StudentIntern : public Employee, public Student {
public:
    StudentIntern(const string& name, int empId, int stuId)
        : Person(name), Employee(name, empId), Student(name, stuId) {}
    void displayStudentIntern() {
        cout << "Methods inside Derived Class StudentIntern : " << endl;
        displayEmployee();
        displayStudent();
    }
};

// driver code
int main() {
    StudentIntern SI("Riya", 67537, 2215);
    SI.displayStudentIntern();

    return 0;
}
