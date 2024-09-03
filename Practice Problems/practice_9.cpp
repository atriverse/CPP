/*
A student signed up for n workshops and wants to attend the maximum number of workshops where no two workshops overlap. You must do the following:

Implement  structures:

struct Workshop having the following members:

    The workshop's start time.
    The workshop's duration.
    The workshop's end time.

struct Available_Workshops having the following members:

An integer, n (the number of workshops the student signed up for).
An array of type Workshop array having size n.

Implement 2 functions:

Available_Workshops* initialize (int start_time[], int duration[], int n)
Creates an Available_Workshops object and initializes its elements using the elements in the start_time[] and duration[] parameters (both are of size ). Here, start_time[i] and duration[i] are the respective start time and duration for the ith workshop. This function must return a pointer to an Available_Workshops object.

int CalculateMaxWorkshops(Available_Workshops* ptr)
Returns the maximum number of workshops the student can attend—without overlap. The next workshop cannot be attended until the previous workshop ends.

Note: An array of unknown size () should be declared as follows:

DataType* arrayName = new DataType[n];
Input Format

Input from stdin is handled by the locked code in the editor; you simply need to write your functions to meet the specifications of the problem statement above.

Constraints

1<=N<=100000
0<=start_time[i]<=1000
1<=duration[i]<=1000

Output Format

Output to stdout is handled for you.

Your initialize function must return a pointer to an Available_Workshops object.
Your CalculateMaxWorkshops function must return maximum number of non-overlapping workshops the student can attend.

Sample Input

6
1 3 0 5 5 8
1 1 6 2 4 1
Sample Output

CalculateMaxWorkshops should return 4.

Explanation

The first line denotes n, the number of workshops.
The next line contains n space-separated integers where the ith integer is the ith workshop's start time.
The next line contains n space-separated integers where the ith integer is the ith workshop's duration.

The student can attend the workshops 0,1,3, and 5 without overlap, so CalculateMaxWorkshops returns 4 to main (which then prints 4 to stdout).
*/

#include <bits/stdc++.h>

using namespace std;
struct Workshop
{
    int start_time, duration, end_time;

    Workshop() {}

    Workshop(int start_time, int duration, int end_time) : start_time(start_time), duration(duration), end_time(end_time) {}
};

struct Available_Workshops
{
    int n;
    vector<Workshop> workshops;

    Available_Workshops(int n) : n(n)
    {
        workshops.reserve(n);
    }
};

Available_Workshops *initialize(int start_time[], int duration[], int n)
{
    Available_Workshops *avbl_workshop = new Available_Workshops(n);

    for (int i = 0; i < n; i++)
    {
        avbl_workshop->workshops.push_back(Workshop(start_time[i], duration[i], start_time[i] + duration[i]));
    }

    delete[] start_time;
    delete[] duration;

    return avbl_workshop;
}

/// Comparison function used to sort a vector of Workshops by their end time in descending order.
/// This function is used as the comparison predicate for the std::sort algorithm when sorting the vector of Workshops.
/// @param workshop_1 The first Workshop to compare.
/// @param workshop_2 The second Workshop to compare.
/// @return True if the end time of workshop_1 is greater than the end time of workshop_2, false otherwise.
bool end_time_sorter(const Workshop &workshop_1, const Workshop &workshop_2)
{
    return workshop_1.end_time > workshop_2.end_time;
}


/// Calculates the maximum number of workshops that can be attended given a set of available workshops.
///
/// The function takes an `Available_Workshops` pointer as input, which contains information about the available workshops.
/// It first sorts the workshops by their end time in descending order using the `end_time_sorter` comparison function.
/// It then iterates through the sorted workshops, keeping track of the current end time and the number of workshops attended.
/// For each workshop, it checks if the start time of the workshop is before the current end time. If so, it removes the workshop from the list.
/// Finally, it deletes the `Available_Workshops` pointer and returns the total number of workshops attended.
///
/// @param ptr A pointer to an `Available_Workshops` object containing the available workshops.
/// @return The maximum number of workshops that can be attended.
int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    sort(ptr->workshops.begin(), ptr->workshops.end(), end_time_sorter);
    for (int i = 0; i < (ptr->n); i++)
    {
        cout << ptr->workshops[i].start_time << " " << ptr->workshops[i].duration << " " << ptr->workshops[i].end_time << endl;
    }
    int curr_end_time, workshop_count = 0;

    while (static_cast<int>((ptr->workshops).size()) > 0)
    {
        curr_end_time = ptr->workshops.back().end_time;
        cout<<curr_end_time<<endl;

        for (int i = static_cast<int>(ptr->workshops.size()) - 1; i >= 0; i--)
        {
            if (ptr->workshops[i].start_time < curr_end_time)
            {
                ptr->workshops.erase(ptr->workshops.begin() + i);
            }
        }

        workshop_count += 1;
    }

    delete ptr;
    return workshop_count;
}


int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
