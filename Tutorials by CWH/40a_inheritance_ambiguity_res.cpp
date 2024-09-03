/*
Ambiguity Resolution in Inheritance
Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are chances that the base classes have functions with the same name. So it will confuse derived class to choose from similar name functions. To solve this ambiguity scope resolution operator is used “::”. 
*/
#include <iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
};

int main(){
    // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived der;
     der.greet();
     /*
     The main thing to note here is that when the function “greet” is called by the object “der” it will run the “greet” function of the “Base2” class because we had specified it using scope resolution operator “::” 
     */
    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();

    /*
    The main thing to note here is that both “B” and “D” classes have the same function “say”, So if the class “D” will call the function “say” it will override the base class “say” method because compiler by default run the method which is already written in its own body. But if the function “say” was not present in the class “D” then the compiler will run the method of the class “B”.
    */
    return 0;
}
