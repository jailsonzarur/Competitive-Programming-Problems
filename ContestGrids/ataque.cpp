#include <bits/stdc++.h>
#define pii pair<int, int> 

using namespace std;

const int MAX = 1e6+10;
const int MAXN = 20;
int matriz[MAXN][MAXN];

vector<pii> coords(MAX);

void fazomapa(int N)
{
    for( int i = 0 ; i < N ; i++ )
    {
        for( int j = 0 ; j < N ; j++ )
        {
            matriz[i][j] = '.';
        }
    }

    for( pii w : coords )
    {
        matriz[w.first][w.second] = 'o';
    }
}

void destruir(int k, int v, int r)
{
    matriz[k][v] = '*';
    
}

int main()
{
    int N; cin >> N;
    int E; cin >> E;
    for( int i = 0 ; i < E ; i++ )
    {
        int temp1, temp2; cin >> temp1 >> temp2;
        pii temp = {temp1, temp2};
        coords.push_back(temp);
    }

    fazomapa(N);

    int B; cin >> B;
    for( int i = 0 ; i < B ; i++ )
    {
        int k, v, r; cin >> k >> v >> r;
    }
}