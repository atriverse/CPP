/*
Property 4
Unlike Java, in C++, all exceptions are unchecked, i.e., the compiler doesn’t check whether an exception is caught or not (See this for details). So, it is not necessary to specify all uncaught exceptions in a function declaration. However,exception-handling it’s a recommended practice to do so.

Example

The following program compiles fine, but ideally, the signature of fun() should list the unchecked exceptions. 
*/

// C++ program to demonstate property 4 in exception
// handling.
 
// #include <iostream>
// using namespace std;
 
// // This function signature is fine by the compiler, but not
// // recommended. Ideally, the function should specify all
// // uncaught exceptions and function signature should be
// // "void fun(int *ptr, int x) throw (int *, int)"
// void fun(int* ptr, int x)
// {
//     if (ptr == NULL)
//         throw ptr;
//     if (x == 0)
//         throw x;
//     /* Some functionality */
// }
 
// int main()
// {
//     try {
//         fun(NULL, 0);
//     }
//     catch (...) {
//         cout << "Caught exception from fun()";
//     }
//     return 0;
// }
/*
Output
Caught exception from fun()

A better way to write the above code: 
*/
// C++ program to demonstate property 4 in better way
 
#include <iostream>
using namespace std;
 
// Here we specify the exceptions that this function
// throws.
void fun(int* ptr, int x) throw(
    int*, int) // Dynamic Exception specification
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Some functionality */
}
 
int main()
{
    try {
        fun(NULL, 0);
    }
    catch (...) {
        cout << "Caught exception from fun()";
    }
    return 0;
}

/*
Output
Caught exception from fun()

Note: The use of Dynamic Exception Specification has been deprecated since C++11. One of the reasons for it may be that it can randomly abort your program. This can happen when you throw an exception of another type which is not mentioned in the dynamic exception specification. Your program will abort itself because in that scenario, it calls (indirectly) terminate(), which by default calls abort().
*/