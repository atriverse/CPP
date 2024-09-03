/*
C++ Access Modifiers

Public Access Modifier in C++
All the variables and functions declared under the public access modifier will be available for everyone. They can be accessed both inside and outside the class. Dot (.) operator is used in the program to access public data members directly.

Private Access Modifier in C++
All the variables and functions declared under a private access modifier can only be used inside the class. They are not permissible to be used by any object or function outside the class.

Protected Access Modifiers in C++
Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived class. 

A table is shown below which shows the behavior of access modifiers when they are derived from public, private, and protected.
	
Type of derivation/Members  Public derivation           Private Derivation          Protected Derivation            
                    
Private members             Not inherited               Not inherited               Not inherited

Protected Members           Protected                   Private                     Protected

Public Members              Public                      Private                     Protected


--> If the class is inherited in public mode then its private members cannot be inherited in child class.
--> If the class is inherited in public mode then its protected members are protected and can be accessed in child class.
--> If the class is inherited in public mode then its public members are public and can be accessed inside the child class and outside the class.
--> If the class is inherited in private mode then its private members cannot be inherited in child class.
--> If the class is inherited in private mode then its protected members are private and cannot be accessed in child class.
--> If the class is inherited in private mode then its public members are private and cannot be accessed in child class.
--> If the class is inherited in protected mode then its private members cannot be inherited in child class.
--> If the class is inherited in protected mode then its protected members are protected and can be accessed in the child class.
--> If the class is inherited in protected mode then its public members are protected and can be accessed in the child class.
*/


//C++ public Access Modifier
// #include <iostream>
// using namespace std;

// // define a class
// class Sample {

//     // public elements
//    public:
//     int age;

//     void displayAge() {
//         cout << "Age = " << age << endl;
//     }
// };

// int main() {

//     // declare a class object
//     Sample obj1;

//     cout << "Enter your age: ";

//     // store input in age of the obj1 object
//     cin >> obj1.age;

//     // call class function
//     obj1.displayAge();

//     return 0;
// }

//C++ private Access Specifier

// #include <iostream>
// using namespace std;

// // define a class
// class Sample {

//     // private elements
//    private:
//     int age;

//     // public elements
//    public:
//     void displayAge(int a) {
//         age = a;
//         cout << "Age = " << age << endl;
//     }
// };

// int main() {

//     int ageInput;

//     // declare an object
//     Sample obj1;

//     cout << "Enter your age: ";
//     cin >> ageInput;
//        // error
//        // cin >> obj1.age;

//     // call function and pass ageInput as argument
//     obj1.displayAge(ageInput);

//     return 0;
// }


//C++ protected Access Specifier

#include <iostream>
using namespace std;

// declare parent class
class Sample {
    // protected elements
   protected:
    int age;
};

// declare child class
class SampleChild : public Sample {

   public:
    void displayAge(int a) {
        age = a;
        cout << "Age = " << age << endl;
    }

};

int main() {
    int ageInput;

    // declare object of child class
    SampleChild child;

    cout << "Enter your age: ";
    cin >> ageInput;

    // call child class function
    // pass ageInput as argument
    child.displayAge(ageInput);

    return 0;
}