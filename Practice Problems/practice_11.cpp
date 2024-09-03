// Linear and Binary Search

#include <bits/stdc++.h>

using namespace std;

class Search
{
public:
    int linearSearch(int arr[], int n, int key)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
    int binarySearch(int arr[], int n, int key)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    Search s;
    cout << "Element Found at: " << s.linearSearch(arr, n, key) << endl;
    cout << "Element Found at: " << s.binarySearch(arr, n, key) << endl;
    return 0;
}
