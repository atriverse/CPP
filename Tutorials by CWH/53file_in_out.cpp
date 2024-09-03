/*
The file is a patent of data which is stored in the disk. Anything written inside the file is called a patent, for example: “#include” is a patent. The text file is the combination of multiple types of characters, for example, semicolon “;” is a character.

The computer read these characters in the file with the help of the ASCII code. Every character is mapped on some decimal number. For example, ASCII code for the character “A” is “65” which is a decimal number. These decimal numbers are converted into a binary number to make them readable for the computer because the computer can only understand the language of “0” and “1”.

The reason that computers can only understand binary numbers is that a computer is made up of switches and switches only perform two operations “true” or “false”.
*/


/*
File Input and Output in C++
The file can be of any type whether it is a file of a C++ program, file of a game, or any other type of file. There are two main operations which can be performed on files

    Read File
    Write File

                      ---->Files-----------
                      |                   |
Can write to the file |                   | Can Read file
                      |                   |                                    cin>>-can be used to input
                      |_|`````````````|   |
                        | C++ Program |<--|<----------------------------------
                        |_____________|                                      |
                               |                                             |
                               |                                             Console Input - Keyboard
cout<<-can print               |
 on screen using cout          |---->Console Output - Screen/Moniter


As shown in figure,

The user can provide input to the C++ program by using keyboard through “cin>>” keyword
The user can get output from the C++ program on the monitor through “cout<<” keyword
The user can write on the file
The user can read the file


*/


/*
File I/O in C++: Reading and Writing Files
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class

*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    // string st = "Harry bhai";
    // // Opening files using constructor and writing it
    // ofstream out("53sample.txt"); // Write operation
    // out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("53sample.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}
