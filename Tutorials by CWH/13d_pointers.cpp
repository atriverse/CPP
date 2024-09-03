/*
Pointer to Pointer
Pointer to Pointer is a simple concept, in which we store the address of one pointer to another pointer. This is also known as multiple indirections owing to the operator’s name.  Here, the first pointer contains the address of the second pointer, which points to the address where the actual variable has its value stored. 

 

An example to demonstrate how we define a pointer to a pointer.
*/
#include <iostream>
using namespace std;
 
int main()
{
    int a = 100;
    int *b = &a;
    int **c = &b;
    cout << "Value of variable a is " << a << endl;
    cout << "Address of variable a is " << b << endl;
    cout << "Address of pointer b is " << c << endl;
    cout << "Value of a is " << **c << endl;
    cout << "Value in b i.e. address of a is " << *c << endl;
    return 0;
}
