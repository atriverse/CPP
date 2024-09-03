/*
Address of Operator (&):
& is also known as the Referencing Operator. It is a unary operator. The variable name used along with the Address of operator must be the name of an already defined variable.

 

Using & operator along with a variable gives the address number of the variable.

 

Here’s one example to demonstrate the use of the address of the operator.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    cout << "Address of variable a is " << &a << endl;
    return 0;
}