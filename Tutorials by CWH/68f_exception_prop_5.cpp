/*
Property 5
In C++, try/catch blocks can be nested. Also, an exception can be re-thrown using “throw; “. 

Example

The following program shows try/catch blocks nesting.
*/

// C++ program to demonstrate try/catch blocks can be nested
// in C++
 
#include <iostream>
using namespace std;
 
int main()
{
 
    // nesting of try/catch
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }
    return 0;
}
/*
A function can also re-throw a function using the same “throw; ” syntax. A function can handle a part and ask the caller to handle the remaining.
*/