#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
 
using namespace std; 
 
int N, M;
string temp;
 
int main()
{
    optimize;
 
    cin >> N >> M;  
 
    char matriz[N][M];
 
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        for (int j = 0; j < M; j++) matriz[i][j] = temp[j];
    }
 
    queue<pii> fila;
    bool visitados[N][M];
    memset(visitados, false, sizeof visitados);
 
    fila.push({N - 1, 0});
 
    while(!fila.empty())
    {
        int pos1 = fila.front().f, pos2 = fila.front().s;
        fila.pop();
 
        if (visitados[pos1][pos2]) continue;
 
        visitados[pos1][pos2] = true;
 
        cout << matriz[pos1][pos2];
 
        if (pos1 > 0) fila.push({pos1 - 1, pos2});
        if (pos2 < M - 1) fila.push({pos1, pos2 + 1});
    }
 
    cout << endl;
 
    return 0;
}