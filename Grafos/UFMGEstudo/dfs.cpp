#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

void dfs(int v)
{
    vis[v] = true;
    cout << v << "->";

    for(int w : g[v])
    {
        if(!vis[w])
        {
           dfs(w); 
        }
    }

}

int main()
{

    int v, a;
    cin >> v >> a;
    for( int i = 0 ; i < a ; i++ )
    {
        int u, d;
        cin >> u >> d;
        g[u].push_back(d);
        g[d].push_back(u);
    }
    
    dfs(0);

}