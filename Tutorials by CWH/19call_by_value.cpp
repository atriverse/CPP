/*
Call by Value in C++
Call by value is a method in C++ to pass the values to the function arguments. In the case of call by value the copies of actual parameters are sent to the formal parameter, which means that if we change the values inside the function that will not affect the actual values. 
*/

#include <iostream>
using namespace std;
 
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
 
int main()
{
    int x = 5, y = 6;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}
