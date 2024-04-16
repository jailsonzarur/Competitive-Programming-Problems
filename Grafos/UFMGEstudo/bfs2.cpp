#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);
vector<int> dist(MAX, -1);

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    vis[v] = true;
    dist[v]++;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int w : g[temp])
        {
            if(!vis[w])
            {
                q.push(w);
                vis[w] = true;
                dist[w] = dist[temp] + 1;
            }
        }
    }

}

int main()
{

}