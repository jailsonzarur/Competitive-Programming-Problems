#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

void dfs(int v)
{
    vis[v] = true;
    for(auto w : g[v])
    {
        if(!vis[w])
        {
            cout << v << "-" << w << endl;
        }
    }
}

int main()
{
    int V, A; cin >> V >> A;
    for( int i = 0 ; i < A ; i++ )
    {
        int i, j; cin >> i >> j;
        g[i].push_back(j);
    }
    dfs(0);
    return 0;
}