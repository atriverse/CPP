/*
Login
C++ Lists

A. What are lists?
Lists are sequence containers that fall under the category of class templates. They are also used to store information in a linear fashion. Only elements of a single data type can be stored in a list. In a list, we have faster insertion and deletion of elements as compared to other containers such as arrays and vectors.  Although, accessing elements at some random position, is comparatively slower. 

B. What makes inserting in and deleting from a list faster?
An array stores the elements in a contiguous manner in which inserting some element calls for a shift of other elements, which is time taking. But in a list, we can simply change the address the pointer is pointing to.

C. Using a list in our programs
To be able to use lists in our code, the header file <list> must be included. And the syntax to define a list is

list<data_type> list_name;
The data_type could be replaced by any data type. One benefit of using lists is that lists support a bidirectional and provide an efficient way for insertion and deletion operations.

Lists provide certain methods to be used to access and utilize the elements of a list, the first one being, the push_back method. To access all the methods and member functions in detail, one can visit this site, std::list(https://cplusplus.com/reference/list/list/). 

D. Initialising a list
A list could be initialized in a very similar way we used to initialize a vector.: A list could be initialized with all the elements inserted in the list at the time it is defined.

list<int> l = {1, 2, 3, 4};

OR it could be even be initialised with elements to be inserted as a parameter.

list<int> l{1, 2, 3, 4};
 
E. Inserting elements in a list
We can insert elements in a list in different ways. The insertion of any element in a list takes constant time, making it faster than insertion in vectors or arrays. Insertion in a list could be done using the push_back() and the push_front() methods. The push_back() function gets the elements to be inserted as a parameter and the element gets pushed at the back. In contrast, the push_front() function gets the elements to be inserted as a parameter and the element gets pushed at the front. 

Another method to insert an element allows us to insert at any random position. Here, we use the insert() method. The syntax for using the insert method is

list_name.insert(iterator, element);

F. Accessing/Changing elements in a list
Changing or accessing any element in a list is a costlier process in terms of time. Any element at any specified position could not be simply accessed using its index number or anything that we could be done for arrays or vectors.

 

We have to use the iterators to manually traverse through the list to reach a specific element or position and then dereference the iterator to retrieve the value at that position.

G. Removing elements from a list
We can remove elements from a list in different ways. The removal of any element in a list takes constant time, making it faster than removal in vectors or arrays. Removal in a list could be done using the pop_back() and the pop_front() methods. The pop_back() function needs nothing as a parameter and the element gets popped from the back while the pop_front() function pops the element from the front. 

Another method to remove an element allows us to remove it from any random position. Here, we use the erase() method. The syntax for using the erase method is

list_name.erase(iterator);
*/

#include <iostream>
#include <list>
using namespace std;
 
void display(list<int> l)
{
    cout << "The elements are: ";
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
}
 
int main()
{
    list<int> l = {1, 2, 3, 4};
    display(l);

    //Inserting elements in a list
    l.push_back(5);//5 is inserted at the back
    display(l);
    l.push_front(0);//0 is inserted at the front
    display(l);
    //using insert method to insert elements at a specific position using iterators
    auto it = l.begin();
    it++;
    it++;
    l.insert(it, 5); //5 is inserted at the third position
    display(l);

    //Accessing/Changing elements in a list
    list<int>::iterator it1 = l.begin();
    it1++;
    it1++;
    cout << "Element at index 2 is " << *it1 << endl;

    // Removing elements from a list
    l.pop_back();
    display(l);
    l.pop_front();
    display(l);

    auto it2 = l.begin();
    it2++;
    it2++;
    l.erase(it2); //element at index 2 gets erased
    display(l);

}
