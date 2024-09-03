// Array as ADT

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <class T=int>
class Array
{
    int size;
    int total_size;
    T *arr;

public:
    Array() {}
    Array(int total_size)
    {
        this->total_size = total_size;
        arr = new T[total_size];
        size = 0;
    }
    void Array_Traversal()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void Array_Insertion(T element, int index)
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        size++;
    }
    void Array_Deletion(int index)
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
};

int main()
{
    Array<> arr(10);
    arr.Array_Insertion(5, 0);
    arr.Array_Insertion(10, 1);
    arr.Array_Insertion(15, 2);
    arr.Array_Insertion(20, 3);
    arr.Array_Traversal();
    arr.Array_Deletion(2);
    arr.Array_Traversal();
    return 0;
}