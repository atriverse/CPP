#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /* Constants */
    // int a=34;
    // cout<<"The value of a was "<<a<<endl;
    // a=45.6;
    // cout<<"The value of a is "<<a<<endl;
    // const int a=3;
    // cout<<"The value of a was "<<a<<endl;
    // // a=45.6;       //Will through error because a is a constant
    // cout<<"The value of a is "<<a<<endl;

    /*
    Manupulators

    In C++ programming, language manipulators are used in the formatting of output. These are helpful in modifying the input and the output stream. They make use of the insertion and extraction operators to modify the output.

    Here’s a list of a few manipulators:

    Manipulators        Description

    endl                It is used to enter a new line with a flush.

    setw(a)             It is used to specify the width of the output.

    setprecision(a)     It is used to set the precision of floating-point values.

    setbase(a)          It is used to set the base value of a numerical number.
    */

    // int a=3,b=78,c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    /*
    Operator Precedence and Associativity

    Operator precedence
    It helps us determine the precedence of an operator over another while solving an expression. Consider an expression a+b*c. Now, since the multiplication operator's precedence is higher than the precedence of the addition operator, multiplication between a and b is done first and then the addition operation will be performed.



    Operator associativity
    It helps us to solve an expression; when two or more operators having the same precedence come together in an expression. It helps us decide whether we should start solving the expression containing operators of the same precedence from left to right or from right to left.

    The table containing the operator precedence and operator associativity of all operators can be found here. C++ Operator Precedence - cppreference.com.
     */
    int a = 3, b = 4;
    int c = a * 5 + b - 45 + 67; // ((((a*5)+b)-45)+87)Visit cpp reference for operator precedence if it is equal see associativity
    cout << c;
    return 0;
}
