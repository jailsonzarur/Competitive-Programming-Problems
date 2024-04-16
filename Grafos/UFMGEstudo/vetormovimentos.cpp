#include <bits/stdc++.h>

using namespace std;

const int MAX = 110;

int n, m;
char M[MAX][MAX];
bool vis[MAX][MAX];

vector<pair<int,int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u) {
    return u.first >= 0 && u.second >= 0 && u.first < n && u.second < m
    && M[u.first][u.second] == 'H' && !vis[u.first][u.second];
}

pair<int, int> bfs(pair<int, int> s) {
    queue<pair<int,int>> q;
    q.push(s); 
    vis[s.first][s.second] = true;

    pair<int, int> v;
    while(!q.empty()) {
        v = q.front();
        q.pop();
        for(auto u : mov) {
            int new_x = u.first + v.first;
            int new_y = u.second + v.second;
            pair<int, int> new_position = {new_x, new_y};
            if(val(new_position)) {
                q.push(new_position);
                vis[new_position.first][new_position.second] = true;
            }
        }
    }
    return v;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> M[i][j];
        } 
    } 

    pair<int, int> s;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(M[i][j] == 'o') s = {i, j};
        }
    }

    pair<int, int> ans = bfs(s);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}
