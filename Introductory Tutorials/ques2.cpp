#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y)
{
    int bt[32] = {0};
    for (int i = x; i <= y; i++)
    {
        int z = i;
        for (int j = 0; j < 32; j++)
        {
            if (z % 2 == 1)
            {
                bt[j]++;
            }
            z = z / 2;
        }
    }
    int maxi = 0;
    for (int i = 0; i < 32; i++)
    {
        maxi = max(maxi, bt[i]);
    }
    int n = y - x + 1;
    cout << "minimum moves required is " << (n - maxi) << endl;
}

int main()
{
    int x, y;
    x = 2;
    y = 19;
    solve(x, y);
    return 0;
}