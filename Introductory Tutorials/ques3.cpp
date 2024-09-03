#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> graph[N];

void dfs(int pos, int par)
{
    cout << pos << " ";
    for (auto &e : graph[pos])
    {
        if (e != par)
        {
            dfs(e, pos);
        }
    }
}

void function123(int n, int array[])
{
    for (int i = 0; i < N; i++)
    {
        graph[i].clear();
    }
    int start = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == -1)
        {
            start = i;
        }
        else
        {
            graph[array[i]].push_back(i);
        }
    }
    dfs(start, -1);
    cout << endl;
}
int main()
{
    int n = 5;
    int ar[5] = {-1, 4, 0, 1, 2};
    function123(n, ar);
    return 0;
}