/*
C++ Templates
 
What are templates?
A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data types. 

Declaring classes for every other data type doesn't completely utilize the potential of C++. It is very analogous to when we said classes are the templates for objects, here templates themselves are the templates of the classes. That is, what classes are for objects, templates are for classes.

Why do we use templates?

1.  DRY Rule:
    To understand the reason behind using templates, we will have to understand the effort behind declaring classes for different data types. Suppose we want to have a vector for each of the three(can be more) data types, int, float and char. Then we’ll obviously write the whole thing again and again making it awfully difficult. This is where the saviour comes, the templates. It helps parametrizing the data type and declaring it once in the source code suffice. Very similar to what we do in functions. It is because of this, also called, ‘parameterized classes’.

2. Generic Programming:
    It is called generic, because it is sufficient to declare a template once, it becomes general and it works all along for all the data types.

Syntax of a template
Consider a class containing two elements, an integer pointer, and an integer variable size. This class acts like an array of integers with a given length size. We often name them a vector.

class vector
{
    int *arr;
    int size;
};

But, if we need another array of some other data type, we will have to redefine another class for the same. To avoid that repetition of logic, templates help. Here’s how we do subtle changes in the same definition of the class for an integer array to make it generic for any other data type as well.

template <class T>
class vector
{
    T *arr;
    int size;
};

Here, we declared a template of class and passed a variable T as its parameter. Then, we defined the class of vector and keep the data type of *arr as T only. Now, the array becomes of the type we supply in the template as T.

 

So, the same vector can now be used as an integer array as well as a float or character array.
*/

#include <iostream>
using namespace std;
 
template <class T>
class vector
{
    T *arr;
    int size;
};
 
int main()
{
    vector<int> v1();
    vector<float> v2();
}
