/*
Multiple Parameter
Syntax for declaring a multiple parametrized template is,

#include <iostream>
using namespace std;
 
template <class T1, class T2>
class nameOfClass
{
    //body
};
 
int main()
{
    //body of main
}

The difference lies only in the number of parameters we declare inside the template. Consider an example that demonstrates the use of multiple parameters in a class template.
*/

#include <iostream>
using namespace std;
 
template <class T1, class T2>
 
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2;
    }
};
 
int main()
{
    myClass<char, int> obj('C', 1);
    obj.display();
}
/*
Now, we defined an object obj in myClass to hold a character and an integer data. It could be anything else since both the parameters have been generalized using the template.
*/
