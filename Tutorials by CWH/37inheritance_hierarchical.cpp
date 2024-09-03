/*
Hierarchical Inheritance
A hierarchical inheritance is a type of inheritance in which several derived classes are inherited from a single base class. 

For example, we have three classes ClassA, ClassB, and ClassC.  If ClassB and Class C are inherited from ClassA, it means that ClassB and ClassC can now implement the functionalities of ClassA. This is hierarchical inheritance.

class ClassA
{
    //body of ClassA
};
 
//derived from ClassA
class ClassB : public ClassA
{
    //body of ClassB
};
 
//derived from ClassA
class ClassC : public ClassA
{
    //body of ClassC
};

*/

// C++ program for Hierarchical Inheritance 
#include<iostream> 
using namespace std; 
  
class A   //superclass A 
{ 
  public: 
  void show_A() { 
    cout<<"class A"<<endl; 
  } 
}; 
class B : public A   //subclass B 
{ 
  public: 
  void show_B() { 
    cout<<"class B"<<endl; 
  } 
}; 
  
class C : public A   //subclass C 
{ 
  public: 
  void show_C() { 
    cout<<"class C"<<endl; 
  } 
}; 
  
int main() { 
  B b;  // b is object of class B 
  cout<<"calling from B: "<<endl; 
  b.show_B(); 
  b.show_A(); 
    
  C c;  // c is object of class C 
  cout<<"calling from C: "<<endl; 
  c.show_C(); 
  c.show_A(); 
  return 0; 
} 