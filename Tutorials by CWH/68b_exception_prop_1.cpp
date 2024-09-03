/*
Property 1
There is a special catch block called the ‘catch-all’ block, written as catch(…), that can be used to catch all types of exceptions.

Example

In the following program, an int is thrown as an exception, but there is no catch block for int, so the catch(…) block will be executed. 
*/

// C++ program to demonstate the use of catch all
// in exception handling.
 
#include <iostream>
// #include <string>
using namespace std;
 
int main()
{
    // try block
    try {
        
        // throw
        // throw 10;
        throw "New Execption";

    }
 
    // catch block
    catch (int excp) {
        cout << "Caught " << excp;
    }
 
    // catch all
    catch (...) {
        cout << "Default Exception\n";
    }
    return 0;
}
