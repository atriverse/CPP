/*
E. Triple Operations
time limit per test1 second
memory limit per test256 megabytes
On the board Ivy wrote down all integers from l to r, inclusive.

In an operation, she does the following:

pick two numbers x and y on the board, erase them, and in their place write the numbers 3x and ⌊y3⌋. (Here ⌊∙⌋ denotes rounding down to the nearest integer).What is the minimum number of operations Ivy needs to make all numbers on the board equal 0? We have a proof that this is always possible.

Input
The first line contains an integer t (1≤t≤104) — the number of test cases.

The only line of each test case contains two integers l and r (1≤l<r≤2⋅105).

Output
For each test case, output a single integer — the minimum number of operations needed to make all numbers on the board equal 0.

Example
InputCopy
4
1 3
2 4
199999 200000
19 84
OutputCopy
5
6
36
263
Note
In the first test case, we can perform 5
 operations as follows:
1,2,3−→−−−−x=1,y=23,0,3−→−−−−x=0,y=31,0,3−→−−−−x=0,y=31,0,1−→−−−−x=0,y=10,0,1−→−−−−x=0,y=10,0,0.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int pow3[13]={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441};
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans=0;
        int count_l=l;
        int count_zero=0;
        while(count_l>0){
            count_l=count_l/3;
            count_zero+=1;
        }
        ans+=(2*count_zero);
        int i=l+1;
        while(i<=r){
            if (pow3[count_zero]<=r)
            {
                ans+=((pow3[count_zero]-i)*count_zero);
                i=pow3[count_zero];
                count_zero+=1;
            }
            else{
                ans+=((r-i+1)*count_zero);
                i=r+1;
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}