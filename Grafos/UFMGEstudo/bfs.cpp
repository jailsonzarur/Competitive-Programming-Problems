#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> dist(MAX, -1);
vector<int> pai(MAX);

void bfs(int s)
{
    queue<int> q;
    q.push(s), vis[s] = true;
    dist[s] = 0;
    pai[s] = s;

    while(!q.empty())
    {
        int v = q.front(); q.pop();
        for(auto w : g[v])
        {
            if(!vis[w])
            {
                dist[w] = dist[v] + 1;
                vis[w] = true;
                q.push(w);
                pai[w] = v;
            }
        }
    }

}

vector<int> path(int v)
{
    vector<int> ret;
    if(!vis[v]) return ret;

    ret.push_back(v);
    while(pai[v] != v)
    {
        v = pai[v];
        ret.push_back(v);
    }

    reverse(ret.begin(), ret.end());

    return ret;

}

int main()
{
    int n, m; cin >> n >> m;
    for( int i = 0 ; i < m ; i++ )
    {
        int v, u;
        cin >> v >> u;
        g[v].push_back(u);
        g[u].push_back(v);
    }

    bfs(0);

    for( int i = 0 ; i < n ; i++ )
    {
        cout << dist[i] << endl;
    }

    vector<int> ans = path(n-1);

    for(auto w : ans) cout << w << " ";
    cout << endl;

    return 0;

}