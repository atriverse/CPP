/*
Functions
Functions are the main part of top-down structured programming. We break the code into small pieces and make functions of that code. Functions could be called multiple or several times to provide reusability and modularity to the C++ program. 

Functions are also called procedures or subroutines or methods and they are often defined to perform a specific task. And that makes functions a group of code put together and given a name that can be called anytime without writing the whole code again and again in a program.

Advantages of Functions
1. The use of functions allows us to avoid re-writing the same logic or code over and over again.

2. With the help of functions, we can divide the work among the programmers.

3. We can easily debug or can find bugs in any program using functions.

4. They make code readable and less complex.

Aspects of a function
Declaration: This is where a function is declared to tell the compiler about its existence.
Definition: A function is defined to get some task executed. (It means when we define a function, we write the whole code of that function and this is where the actual implementation of the function is done).
Call: This is where a function is called in order to be used.

Function Prototype in C++
The function prototype is the template of the function which tells the details of the function which include its name and parameters to the compiler. Function prototypes help us to define a function after the function call. 

Example of a function prototype,

// Function prototype
return_datatype function_name(datatype_1 a, datatype_2 b);
 
Types of functions

Library functions:
Library functions are pre-defined functions in C++ Language. These are the functions that are included in C++ header files prior to any other part of the code in order to be used.

E.g. sqrt(), abs(), etc.

 

User-defined functions
User-defined functions are functions created by the programmer for the reduction of the complexity of a program. Rather, these are functions that the user creates as per the requirements of a program.

E.g. Any function created by the programmer.
*/

/*
Functions Parameters
A function receives information that is passed to them as a parameter. Parameters act as variables inside the function.

Parameters are specified collectively inside the parentheses after the function name. parameters inside the parentheses are comma separated.

 

We have different names for different parameters.

 

Formal Parameters
So, the variable which is declared in the function is called a formal parameter or simply, a parameter. For example, variables a and b are formal parameters.

int sum(int a, int b){
   //function body
}
 

Actual Parameters

The values which are passed to the function are called actual parameters or simply, arguments. For example, the values num1 and num2 are arguments.
*/
#include <iostream>

using namespace std;
int sum(int a, int b){
    return a+b;
}
 
int main()
{
    int num1 = 5;
    int num2 = 6;
    cout<<sum(num1, num2);//actual parameters
}
/*
A function doesn't need to have parameters or it should necessarily return some value.
*/