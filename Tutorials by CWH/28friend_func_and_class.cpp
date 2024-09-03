/*
Friend Functions & Classes

Friend functions are those functions that have the right to access the private data of members of the class even though they are not defined inside the class. It is necessary to write the prototype of the friend function. 

Declaring a friend function inside a class does not make that function a member of the class. 

Properties of Friend Function

Not in the scope of the class, means it is not a member of the class.
Since it is not in the scope of the class, it cannot be called from the object of that class.
Can be declared anywhere inside the class, be it under the public or private access modifier, it will not make any difference
It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.

The syntax for declaring a friend function inside a class is

class class_name
{
    friend return_type function_name(arguments);
};
 
return_type class_name::function_name(arguments)
{
    //body of the function
}
*/

// C++ program to demonstrate the working of friend function

// #include <iostream>
// using namespace std;

// class Distance {
//     private:
//         int meter;
        
//         // friend function
//         friend int addFive(Distance);

//     public:
//         Distance() : meter(0) {}
        
// };

// // friend function definition
// int addFive(Distance d) {

//     //accessing private members from the friend function
//     d.meter += 5;
//     return d.meter;
// }

// int main() {
//     Distance D;
//     cout << "Distance: " << addFive(D);
//     return 0;
// }

/*
Friend Classes in C++
Friend classes are those classes that have permission to access private members of the class in which they are declared. The main thing to note here is that if the class is made friends of another class then it can access all the private members of that class.

The syntax for declaring a friend class inside a class is

class class_name
{
    friend class friend_class_name;
};
*/

// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA;

        // friend class declaration
        friend class ClassB;

    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}
    
    // member function to add numA
    // from ClassA and numB from ClassB
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}