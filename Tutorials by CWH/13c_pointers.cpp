/*
Indirection Operator
* is also known as the Dereferencing Operator. It is a unary operator. It takes an address as its argument and returns the content/container whose address is its argument. 

 

Here’s one example to demonstrate the use of the indirection operator.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int a = 100;
    cout << "Value of variable a stored at address " << &a << " is " << (*(&a)) << endl;
    return 0;
}