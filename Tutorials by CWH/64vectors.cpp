/*
C++ Vectors

A. What are vectors?
Vectors are sequence containers that fall under the category of class templates. They are used to store information in a linear fashion. Elements of a single data type can be stored in a vector. In a vector, we can access elements faster in comparison to arrays. Although, insertion and deletion at some random position, except at the end is comparatively slower. And inserting any element at the end happens faster.

B. Using a vector in our programs
To be able to use vectors in our code, the header file <vector> must be included. And the syntax to define a vector is

vector<data_type> vector_name;
The data_type could be replaced by any data type. One benefit of using vectors is that we can insert as many elements as we want in a vector, without having to put some size parameter as we do in an array.

Vectors provide certain methods to be used to access and utilize the elements of a vector, the first one being, the push_back method. To access all the methods and member functions in detail, one can visit this site, std::vector - C++ Reference(https://www.cplusplus.com/reference/vector/vector/).


C. Initialising a vector
A vector could be initialized in different ways:

In the first method, a vector could be initialized with all the elements inserted in the vector at the time it is defined.

vector<int> v = {1, 2, 3, 4};

Another method to initialize a vector is where we pass two parameters along with its definition where the first parameter defines the size of the vector and the second parameter is the uniform value it will have at all its positions.

vector<int> v(4, 10);

Here, v is of size 4 with value 10 at all positions.

D. Inserting elements in a vector
We can insert elements in a vector in different ways. The most economical way to insert an element in a vector is when we insert it at the rear end using the push_back method. The push_back() function gets the elements to be inserted as a parameter and the element gets pushed at the back.

vector<int> v = {1, 2, 3, 4};
v.push_back(5); //5 is inserted at the back

Another method to insert an element allows us to insert at any random position. Here, we use the insert() method. The syntax for using the insert method is

vector_name.insert(iterator, element);


E. Accessing/Changing elements in a vector
Changing any element at any position is similar to accessing them. Any element at any specified position could be accessed using its index number as it was done for arrays.

vector<int> v = {1, 2, 3, 4};
cout << "Element at index 0 is " << v[0] << endl;


Another method that gets added for vectors is the at() method which accepts the index number as its parameter and returns the element at that position.

vector<int> v = {1, 2, 3, 4};
cout << "Element at index 2 is " << v.at(2) << endl;

F. Removing elements from a vector
We can remove elements from a vector in different ways. The most economical way to remove an element from a vector is when we remove it from the rear end using the pop_back method. The pop_back() function needs nothing as a parameter and the element gets popped from the back.

Another method to remove an element allows us to remove it from any random position. Here, we use the erase() method. The syntax for using the erase method is

vector_name.erase(iterator);
*/

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v)
{
    cout << "The elements are: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    display(v);

    v.push_back(5); // 5 is inserted at the back
    display(v);

    v.insert(v.begin(), 5); // 5 is inserted at the front
    display(v);

    cout << "Element at index 0 is " << v[0] << endl;    // accessing the element at index 0 using []
    cout << "Element at index 2 is " << v.at(2) << endl; // accessing the element at index 2 using at()

    v.pop_back(); // 4 gets popped from the back
    display(v);

    v.erase(v.begin()); // 1 gets erased from the front
    display(v);

    
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    /*
    We can generate an iterator using the scope resolution iterator by the following syntax:

    vector<int> :: iterator iter = vec1.begin();
    */
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    display(vec1);

    /*
    We have different ways to declare a vector. I’ll list some of them through the snippet below.

     --->First one is a vector with no length and elements specified.
     --->Second one is a vector of length 4 and no elements.
     --->Third one is a vector made from the second one.
     --->And last one, is a vector with length 6 and all the elements being 3.
         vector<int> vec1;      //zero length integer vector
         vector<char> vec2(4);  //4-element character vector
         vector<char> vec3(vec2);//4-element character vector from vec2
         vector<int> vec4(6,3); //6-element vector of 3s
    */
    return 0;
}
