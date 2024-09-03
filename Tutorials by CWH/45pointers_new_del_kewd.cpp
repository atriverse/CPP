#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // example program for pointers and the use of a “new” keyword is shown below.
    float *p = new float(40.78);    //We created a float pointer “p” and dynamically created a float which has value “40.78” and assigned that value to pointer “p”
    cout << "The value at address p is " << *(p) << endl;
    
    //example program for pointers array and the use of a “new” keyword with an array is shown below.
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    //example program for pointers array and the use of the “delete” keyword with an array is shown below.
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}
