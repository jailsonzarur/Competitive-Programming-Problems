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
#define MAXN 1000
 
using namespace std; 
 
int N, M;
string temp;
 
bool visitados[MAXN][MAXN];
char matriz[MAXN][MAXN];
 
void capivarinha(int i, int j)
{
    if (visitados[i][j]) return;
 
    visitados[i][j] = true;
 
    if (i > 0)
    {
        if (matriz[i - 1][j] == '1') capivarinha(i - 1, j);
    }
 
    if (i < N - 1)
    {
        if (matriz[i + 1][j] == '1') capivarinha(i + 1, j);
    }
 
    if (j > 0)
    {
        if (matriz[i][j - 1] == '1') capivarinha(i, j - 1);
    }
 
    if (j < M - 1)
    {
        if (matriz[i][j + 1] == '1') capivarinha(i, j + 1);
    }
}
 
int main()
{
    optimize;
 
    cin >> N >> M;  
 
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        for (int j = 0; j < M; j++) matriz[i][j] = temp[j];
    }
 
    memset(visitados, false, sizeof visitados);
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matriz[i][j] == '0') visitados[i][j] = true;
            else if (!visitados[i][j])
            {
                if (i == 0 || i == N - 1 || j == 0 || j == M - 1) capivarinha(i, j);
            }
        }
    }
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matriz[i][j] == '0' || !visitados[i][j]) cout << 0;
            else cout << 1;
        }
        cout << endl;
    }
 
    return 0;
}