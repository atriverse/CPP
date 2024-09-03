/*
Initialization list in Constructors in C++
The initialization list in constructors is another concept of initializing the data members of the class. The syntax of the initialization list in constructors is shown below.

Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : b(j), a(i+b)// The main thing to note here is that if we use the code shown below to initialize data members the compiler will throw an error because the data member “a” is being initialized first and the “b” is being initialized second so we have to assign the value to “a” data member first.
    // Test(int i, int j) : a(i), b(a + j)//But if we use the code shown below to initialize data members the compiler will not throw an error because the data member “a” is being initialized first and we are assigning the value to the data member “a” first.
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
