/*
Class templates are one application of templates. Class templates could be used according to the requirements of the programmer. Templates are nothing but shortened generic declarations of similar entities. They are expanded at the compile time. 

Examples of some of the in-built class templates are,

Vector, Set, Linked List etc.

Class templates are helpful for classes that are independent of the data type. And like any other function, there could be more than one parameter to a template. On the basis of the number of parameters of a template, they could be single parameters as well as multiple parameters. 


// Single parameter
//Syntax for declaring a single parametrized template is,

#include <iostream>
using namespace std;
 
template <class T>
class nameOfClass
{
    //body
};
 
int main()
{
    //body of main
}
*/

#include <iostream>
using namespace std;

// Normally we do like this by defining a class with a fixed data type
class vector
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size];
        }
    int dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};


// Here we are using template to make a class generic
template <class T>
class vector1
{
    public:
        T *arr;
        int size;
        vector1(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector1 &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    //With fixed int data type of array
    vector v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;

    //With variable data type of array (here we are using float)
    vector1<float> v3(3); //vector 1 with a float data type
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;
    vector1<float> v4(3); //vector 2 with a float data type
    v4.arr[0]=0.1;
    v4.arr[1]=1.90;
    v4.arr[2]=4.1;
    float b = v3.dotProduct(v4);
    cout<<b<<endl;
    return 0;
}

