#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;

vector<vector<int>> g(MAX);
vector<bool> vis1(MAX);
vector<bool> vis2(MAX);

int pontociclo;
int origem;

void dfs1(int v, int pai) {
    vis1[v] = true;
    for( auto w : g[v] ) {
        if(vis1[w] && w != pai && pai != -1) pontociclo = v;
        if(!vis1[w]) dfs1(w, v);
    }
}

void dfs2(int v, int pai) {
    vis2[v] = true;
    
}

int main() {
    int n, m;
    cin >> n >> m;
    for( int i = 0 ; i < m ; i++ ) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int imax;
    int max = 0;
    for( int i = 0 ; i < n ; i++ ) {
        if(g[i].size() > max){
            max = g[i].size();
            imax = i;
        }
    }

    dfs1(0, -1);

    cout << pontociclo << endl;
    return 0;
}