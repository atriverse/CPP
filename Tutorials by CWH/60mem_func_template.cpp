/*
Here, we first write the function declaration in the class itself. Then move to the outside and use the scope resolution operator before the function and after the name of the class Harry along with the data type T. We must specify the function data type, which is void here. And it must be preceded by the template declaration for class T.

And write the display code inside the function and this will behave as expected. See the output below the snippet.
*/
#include <iostream> 
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>
void Harry<T> :: display(){
    cout<<data;
}

int main()
{
    Harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}
