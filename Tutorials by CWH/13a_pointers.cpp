/*
Pointers
A pointer is a data type that holds the address of another data type. A pointer itself is a variable that points to any other variable. It can be of type int, char, array, function, or even any other pointer. Pointers in C++ are defined using the ‘*’ (asterisk) operator.



The ‘&’(ampersand) operator is called the ‘address of’ operator, and the ‘*’(asterisk) operator is called the ‘value at’ dereference operator.



Applications of a Pointer
Pointers are used to dynamically allocate or deallocate memory.

Pointers are used to point to several containers such as arrays, or structs, and also for passing addresses of containers to functions.

Return multiple values from a function

Rather than passing a copy of a container to a function, we can simply pass its pointer. This helps reduce the memory usage of the program.

Pointer reduces the code and improves the performance.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *b = &a;
    int **c = &b;
    cout << a << endl;
    cout << b << endl;
    cout << *b << endl;
    cout << *c << endl;
    cout << c << endl;
    cout << **c << endl;
    return 0;
}