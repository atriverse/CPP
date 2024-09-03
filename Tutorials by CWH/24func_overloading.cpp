/*
Function Overloading
Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequences. Now, there are a few conditions and any number of functions with the same name following any of these are called overloaded.

Same name but different data type of parameters
Example

float sum(int a, int b);
float sum(float a, float b);
 

Same name but a different number of parameters
Example

float sum(int a, int b);
float sum(int a, int b, int c);
 

Same name but different parameter sequence
Example

float sum(int a, float b);
float sum(float a, int b);
Exact matches are always preferred while looking for a function that has the same set of parameters.
*/

#include <iostream>

using namespace std;
int sum(int a, int b){
    return a+b;
}

int sum(int a, int b,int c){
    return a+b+c;
}
 
int sum(int a, int b,int c,int d){
    return a+b+c+d;
}
int main()
{
    int num1 = 5;
    int num2 = 6;
    cout<<sum(num1, num2)<<endl;//actual parameters
    cout<<sum(num1, num2,num1)<<endl;//actual parameters
    cout<<sum(num1, num2,num1,num2)<<endl;//actual parameters
}