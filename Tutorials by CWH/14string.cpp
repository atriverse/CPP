/*
Strings
A string is an array of characters. Unlike in C, we can define a string variable and not necessarily a character array to store a sequence of characters. Data of the same type are stored in an array, for example, integers can be stored in an integer array, similarly, a group of characters can be stored in a character array or a string variable. A string is a one-dimensional array of characters.

Declaring a string is very simple, the same as declaring a one-dimensional array. It’s just that we are considering it as an array of characters.

Below is the syntax for declaring a string.

string string_name ;
In the above syntax, string_name is any name given to the string variable and it can be given a string input later or it can even be initialised at the time of definition.

string string_name = "CodeWithHarry";
*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    // declare and initialise string
    string str = "CodeWithHarry";
    cout << str << endl;
    return 0;
}

/*
Note: To be able to use these strings, you must declare another header file named string. It contains a lot of useful string functions and libraries as well.
*/