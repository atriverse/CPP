/*
Default Parameter
C++ Templates have this additional ability to have default parameters. Its ability to have default specifications about the data type, when it receives no arguments from the main is a powerful attribute.

 

The syntax for making a parameter have a default datatype,

template <class T1 = datatype_1, class T2 = datatype_2>

Now, even if the programmer does not specify the type of the data, objects created using this template will automatically make it, of the form <datatype_1, datatype_2>.

 

Consider an example demonstrating the application of the default parameters,
*/

#include <iostream>
using namespace std;
 
template <class T1 = int, class T2 = float, class T3 = char>
class myClass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
 
    myClass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << "The value of a is " << data1 << endl;
        cout << "The value of b is " << data2 << endl;
        cout << "The value of c is " << data3 << endl;
    }
};
 
int main()
{
    //Here default parameters are used
    myClass<> obj1(1, 4.3, 'C');
    obj1.display();

    cout << endl;

    //Here we are specifying the data types
    myClass<float, char, char> obj2(1.4, 'C', 'D');
    obj2.display();
}

/*
The template has default defined its parameters as an integer, a float, and a character. Now, if the programmer wishes to change the data types, it must be exclusively mentioned and the object must be defined as it was done in earlier examples.
*/
