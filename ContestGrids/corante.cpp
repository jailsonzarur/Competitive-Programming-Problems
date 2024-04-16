#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;

char matriz[MAXN][MAXN];
bool vis[MAXN][MAXN];
int L, C;

vector<pair<int,int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pair<int, int> u) {
    return u.first >= 0 && u.second >= 0 && u.first < L && u.second < C
    && matriz[u.first][u.second] == 'A' && !vis[u.first][u.second];
}


void escorre(pair<int, int> s)
{
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
                matriz[new_position.first][new_position.second] = 'T';
            }
        }
    }
}

int main()
{
    while(true)
    {
        cin >> L >> C;
        if(L == 0 && C == 0) break;
        pair<int, int> coord;
        for( int i = 0 ; i < L ; i++ )
        {
            for( int j = 0 ; j < C ; j++ )
            {
                cin >> matriz[i][j];
                if(matriz[i][j] == 'T') coord = {i, j};
            }
        }
        escorre(coord);
        for( int i = 0 ; i < L ; i++ )
        {
            for( int j = 0 ; j < C ; j++ )
            {
                cout << matriz[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}