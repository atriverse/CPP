/*
Multiple Inheritance
Multiple inheritances is a type of inheritance in which one derived class is inherited from more than one base class.

For example, we have three classes ClassA, ClassB, and ClassC.  If ClassC is inherited from both ClassA & ClassB, it means that ClassC can now implement the functionalities of both ClassA & ClassB. This is multiple inheritances.

class ClassA
{
    //body of ClassA
};
 
class ClassB
{
    //body of ClassB
};
 
//derived from ClassB and Class C
class ClassC : public ClassA, public ClassB
{
    //body of ClassC
};

*/

#include<iostream>
using namespace std;
 
class A
{
public:
  A()  { cout << "A's constructor called" << endl; }
};
 
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }
};
 
class C: public B, public A  // Note the order
{
public:
  C()  { cout << "C's constructor called" << endl; }
};
 
int main()
{
    C c;
    return 0;
}