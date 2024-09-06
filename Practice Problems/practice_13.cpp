#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
        int f; cin >> f;
        
        int l = f - 1, r = f + 1;
        
        bool isOk = true;
        for (int i = 1; i < n; i++) {
            int cur; cin >> cur;
            
            if (cur == l) {
                l--;
            }
            else if (cur == r) {
                r++;
            }
            else {
                isOk = false;
            }
        }
        
        if (isOk) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
 
    return 0;
}