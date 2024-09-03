/*
Overloading a function simply means assigning two or more functions with the same name, the same job, but with different parameters.  For that, we’ll declare a void function named func. And a template function with the same name. Follow the snippet below to do the same:

We made two void functions, one specified and one generic using a template.
The first one receives an integer and prints the integer with a different prefix. 
The generic one receives the value as well as the data type and prints the value with a different prefix.
Now, we’ll wish to see the output of the following functions, by calling them from the main. Refer to the main program below the snippet below.
*/

#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

/*
And now when we call the function func, we’ll be interested to know which one among the two it calls. So here since we’ve entered a value with an integer parameter, it finds its exact match in the overloading and calls that itself. That is, it gives its exact match the highest priority. 
*/
int main()
{
    func(4);  //Exact match takes the highest priority
    /*
    If we hadn’t created the first function with int data type,  the call would have gone to the templatised func only because a template function is an exact match for every kind of data type. 
    */
    func(4.1); // if we use float it will call template function because it didn't find any exact match
    return 0;
}

