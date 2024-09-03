/*
Two special methods that are often used by programmers to have their program work efficiently are,

Default Arguments in C++
Default arguments are those values which are used by the function if we don’t input our value as parameter. It is recommended to write default arguments after the other arguments.

An example using default argument,

int sum(int a = 5, int b);

Constant Arguments in C++
Constant arguments are used when you don’t want your values to be changed or modified by the function. The const keyword is used to make the parameters non-modifiable.

An example using constant argument,

int sum(const int a, int b);
*/

#include <iostream>

using namespace std;
int sum(int a, int b = 5)
{
    return a + b;
}

// int sum(int const a, int b){
//     return a+b;
// }

int main()
{
    int num1 = 5;
    int num2 = 6;
    cout << sum(num1); // default argument
}