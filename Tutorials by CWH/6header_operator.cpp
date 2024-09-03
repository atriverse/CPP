// There are two types of header files
//  1. System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include<this.h> //This will produce an error if this.h is not present in the current directory
// Visit "cpp reference for headers"

/*

C++ Operators
Special symbols that are used to perform actions or operations are known as operators. They could be both unary or binary.

For example, the symbol + is used to perform addition in C++ when put in between two numbers, so it is a binary operator. There are different types of operators. They are as follows:
*/
using namespace std;

int main()
{
    /* code */
    int a = 4, b = 5;
    cout << "The pr0gram is for header files and operator";
    cout << "Operators in C++:" << endl;
    cout << "Types of operators" << endl;
    // Arithmetic operators
    /*
    Arithmetic operators are used to perform mathematical operations such as addition, subtraction, etc. They could be both binary and unary. A few of the simple arithmetic operators are

    Operation           Description

    a + b               Adds a and b

    a - b               Subtracts b from a

    a * b               Multiplies a and b

    a / b               Divides a by b

    a % b               Modulus of a and b

    a++                 Post increments a by 1

    a--                 Post decrements a by 1

    ++a                 Pre increments a by 1

    --a                 Pre decrements a by 1
    */
    cout << "THe value of a+b is " << a + b << endl;
    cout << "THe value of a-b is " << a - b << endl;
    cout << "THe value of a*b is " << a * b << endl;
    cout << "THe value of a/b is " << a / b << endl;
    cout << "THe value of a%b is " << a % b << endl;
    cout << "THe value of a++ is " << a++ << endl;
    cout << "THe value of a-- is " << a-- << endl;
    cout << "THe value of ++b is " << ++b << endl;
    cout << "THe value of --b is " << --b << endl
         << endl;

    // Assignment operators--> used to assign values to variables
    /*
    Operator        Description

    =               It assigns the right side operand value to the left side operand.

    +=              It adds the right operand to the left operand and assigns the result to the left operand.

    -=              It subtracts the right operand from the left operand and assigns the result to the left operand.

    *=              It multiplies the right operand with the left operand and assigns the result to the left operand.

    /=              It divides the left operand with the right operand and assigns the result to the left operand.

    */
    // int a=3,b=9;
    // char d='d'

    // Comparision operators
    /*
    Relational operators are used to check the relationship between two operands and to compare two or more numbers or even expressions in cases. The return type of a relational operator is a Boolean that is, either True or False (1 or 0).

    Operator        Description

    >               Greater than

    <               Less than

    >=              Greater than or equal to

    <=              Less than or equal to

    ==              Is equal to

    !=              Is not equal to
    */
    cout << "THe value of a==b is " << (a == b) << endl;
    cout << "THe value of a!=b is " << (a != b) << endl;
    cout << "THe value of a<=b is " << (a <= b) << endl;
    cout << "THe value of a>=b is " << (a >= b) << endl;
    cout << "THe value of a>b is " << (a > b) << endl;
    cout << "THe value of a<b is " << (a < b) << endl
         << endl;

    // Logical operators
    /*
    Logical Operators are used to check whether an expression is true or false. There are three logical operators i.e. AND, OR, and NOT. They can be used to compare Boolean values but are mostly used to compare expressions to see whether they are satisfying or not.

    AND: it returns true when both operands are true or 1.

    OR: it returns true when either operand is true or 1.

    NOT: it is used to reverse the logical state of the operand and is true when the operand is false.

    Operator        Description

    &&              AND Operator

    ||              OR Operator

    !               NOT Operator
    */
    cout << "THe value of ((a==b)&&(a<b)) is " << ((a == b) && (a < b)) << endl;
    cout << "THe value of ((a==b)||(a<b)) is " << ((a == b) || (a < b)) << endl;
    cout << "THe value of (!(a==b)) is " << (!(a == b)) << endl;

    // Bitwise operators
    /*
    A bitwise operator is used to perform operations at the bit level. To obtain the results, they convert our input values into binary format and then process them using whatever operator they are being used with.

    Operator            Description

    &                   Bitwise AND

    |                   Bitwise OR

    ^                   Bitwise XOR

    ~                   Bitwise Complement

    >>                  Shift Right Operator

    <<                  Shift Left Operator
    */
    cout << "The value of a & b is " << (a & b) << endl;
    cout << "The value of a | b is " << (a | b) << endl;
    cout << "The value of a ^ b is " << (a ^ b) << endl;
    cout << "The value of ~a is " << (~a) << endl;
    cout << "The value of a >> 2 is " << (a >> 2) << endl;
    cout << "The value of a << 2 is " << (a << 2) << endl;
    return 0;
}
