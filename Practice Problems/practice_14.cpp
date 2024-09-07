/*
C. Numeric String Template
time limit per test2 seconds
memory limit per test256 megabytes
Kristina has an array a, called a template, consisting of n integers. She also has m strings, each consisting only of lowercase Latin letters. The strings are numbered from 1 to m. She wants to check which strings match the template.

A string s is considered to match the template if all of the following conditions are simultaneously satisfied:

The length of the string s is equal to the number of elements in the array a.
The same numbers from a correspond to the same symbols from s. So, if ai=aj, then si=sj for (1≤i,j≤n).
The same symbols from s correspond to the same numbers from a. So, if si=sj, then ai=aj for (1≤i,j≤n).In other words, there must be a one-to-one correspondence between the characters of the string and the elements of the array.For example, if a = [3,5,2,1,3], then the string "abfda" matches the template, while the string "afbfa" does not, since the character "f" corresponds to both numbers 1 and 5.

Input
The first line of input contains a single integer t (1≤t≤104) — the number of test cases.

The following descriptions are for the test cases.

The first line of each test case contains a single integer n (1≤n≤2⋅105) — the number of elements in the array a.

The second line of each test case contains exactly n integers ai (−109≤ai≤109) — the elements of the array a.

The third line of each test case contains a single integer m (1≤m≤2⋅105) — the number of strings to check for template matching.

Following are m strings, each containing a non-empty string sj (1≤|sj|≤2⋅105), consisting of lowercase Latin letters.It is guaranteed that the sum of n across all test cases does not exceed 2⋅105, and that the sum of the lengths of all strings does not exceed 2⋅105.

Output
For each test case, output m lines. On the i-th line (1≤i≤m) output:

"YES", if the string with index i matches the template;"NO" otherwise.
You may output the answer in any case (for example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as a positive answer).

Example
Input
3
5
3 5 2 1 3
2
abfda
afbfa
2
1 2
3
ab
abc
aa
4
5 -3 5 -3
4
aaaa
bcbc
aba
cbcb
Output
YES
NO
YES
NO
NO
NO
YES
NO
YES
*/
#include<bits/stdc++.h>
using namespace std;
 
string check(int a[], int n, string s) {
    if (n != s.size()) {
        return "NO";
    }
    
    unordered_map<int, char> map1;
    unordered_map<char, int> map2;
    
    for (int i = 0; i < n; ++i) {
        if (map1.find(a[i]) != map1.end()) {
            if (map1[a[i]] != s[i]) {
                return "NO";
            }
        } else {
            map1[a[i]] = s[i];
        }
        
        if (map2.find(s[i]) != map2.end()) {
            if (map2[s[i]] != a[i]) {
                return "NO";
            }
        } else {
            map2[s[i]] = a[i];
        }
    }
    
    return "YES";
}
int main() {
 
 
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        while (m--) {
            string s;
            cin >> s;
            string r = check(arr, n, s);
            cout << r << endl;
        }
    }
    return 0;
}