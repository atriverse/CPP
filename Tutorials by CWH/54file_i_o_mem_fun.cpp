/*
Using the member function open:

The member function open is used to connect the text file to the C++ program when passed into it.

Using the member function eof:

The member function eof(End-of-file) returns a boolean true if the file reaches the end of it and false if not. 
*/

#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member function open()
    out.open("54sample.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    //closing the file connection
    out.close();


    // declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("54sample.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}
