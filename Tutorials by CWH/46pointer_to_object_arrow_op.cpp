/*
Pointer to objects in C++
As discussed before pointers are used to store addresses of variables which have data types like int, float, double etc. But pointer can also store the address of an object. 

Arrow Operator in C++ "->"

"(*ptr)."=="ptr->"
*/

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54); //is exactly same as ptr->setData(1, 54);
    (*ptr).getData(); //is as good as ptr->getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    /*
    The main thing to note here is that we called the member function with pointers by using arrow operator “->” instead of the dot operator “.” but still it will give the same results.
    */
    return 0;
}
