/*
C++ Basic Input/Output
C++ language comes with different libraries, which help us in performing input/output operations. In C++, sequences of bytes corresponding to input and output are commonly known as streams. There are two types of streams.

They are,



Input stream
In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.



Output stream
In the output stream, the direction of flow of bytes occurs from the main memory to the output device (for ex-display)
*/

#include <iostream>
using namespace std;

int main()
{
    /* code */
    int num1, num2;
    cout << "Enter the value of num1:\n";
    /*This << is insertion operator*/
    cin >> num1;
    /*This >> is Extration operator*/
    cout << "Enter the value of num2:\n";
    /*This << is insertion operator*/
    cin >> num2;
    /*This >> is Extration operator*/
    cout << "The sum is " << num1 + num2;
    return 0;
}
/*
Important Points
The sign << is called the insertion operator.

The sign >> is called the extraction operator.

cout keyword is used to print.

cin keyword is used to take input at run time.
*/