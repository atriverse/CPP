/*
Multilevel Inheritance
Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class. 

For example, we have three classes ClassA, ClassB, and ClassC.  If ClassB is inherited from ClassA and ClassC is inherited from ClassB, it means that ClassB can now implement the functionalities of ClassA and ClassC can now implement the functionalities of ClassB. This is multilevel inheritance.

class ClassA
{
    //body of ClassA
};
 
//derived from ClassA
class ClassB : public ClassA
{
    //body of ClassB
};
 
//derived from ClassB
class ClassC : public ClassB
{
    //body of ClassC
};

*/

// C++ program to implement
// Multilevel Inheritance
#include <bits/stdc++.h>
using namespace std;
 
// single base class
class A {
public:
    int a;
    void get_A_data()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
};
 
// derived class from base class
class B : public A {
public:
    int b;
    void get_B_data()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
};
 
// derived from class derive1
class C : public B {
private:
    int c;
 
public:
    void get_C_data()
    {
        cout << "Enter value of c: ";
        cin >> c;
    }
 
    // function to print sum
    void sum()
    {
        int ans = a + b + c;
        cout << "sum: " << ans;
    }
};
int main()
{
    // object of sub class
    C obj;
 
    obj.get_A_data();
    obj.get_B_data();
    obj.get_C_data();
    obj.sum();
    return 0;
}