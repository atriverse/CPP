/*
C++ Encapsulation
 

Encapsulation is the first pillar of Object Oriented Programming. It means wrapping up data attributes and methods together. The goal is to keep sensitive data hidden from users.

Encapsulation is considered a good practice where one should always make attributes private for them to become non-modifiable until needed. The data is ultimately more secure as a result of this. Once members are made private, methods to access them or change them should be declared. 

 

An example of how encapsulation is achieved is

*/

#include <iostream>
using namespace std;
 
class class_name
{
private:
    int a;
 
public:
    void setA(int num)
    {
        a = num;
    }
 
    int getA()
    {
        return a;
    }
};
 
int main()
{
    class_name obj;
    obj.setA(5);
    cout << obj.getA() << endl;
}
