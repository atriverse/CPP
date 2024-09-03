/*
Property 3
If an exception is thrown and not caught anywhere, the program terminates abnormally.

Example

In the following program, a char is thrown, but there is no catch block to catch the char. 


*/
// C++ program to demonstate property 3: If an exception is
// thrown and not caught anywhere, the program terminates
// abnormally in exception handling.
 
#include <iostream>
using namespace std;
 
int main()
{
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "Caught ";
    }
    /*
    Output

    terminate called after throwing an instance of 'char'
    */
    /*
    We can change this abnormal termination behavior by writing our unexpected function.

    Note: A derived class exception should be caught before a base class exception.
    */

    return 0;
}

