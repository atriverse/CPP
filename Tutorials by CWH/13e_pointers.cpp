/*
Arrays and Pointers
Storing the address of an array into pointer is different from storing the address of a variable into the pointer. The name of an array itself is the address of the first index of an array. So, to use the (ampersand)& operator with the array name for assigning the address to a pointer is wrong. Instead, we used the array name itself.



An example program for storing the starting address of an array in the pointer,
*/
#include <iostream>
using namespace std;

int main()
{
    // int marks[] = {99, 100, 38};
    // int *p = marks;
    // cout << "The value of marks[0] is " << *p << endl;
    int marks[] = {99, 100, 38};
    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    cout << "The value of marks[2] is " << *(p + 2) << endl;
    return 0;
}