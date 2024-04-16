#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<int, pair<int,int>>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 600
 
using namespace std;
 
int N, V;
 
bool dp()
{
    int cont = 0;
 
    while(V != 0)
    {
        for (int i = 0; i < V; i++)
        {
            cont += V;
            if (cont == N) return true;
        }
 
        V--;
    }
 
    return false;
}
 
int main()
{
    optimize;
 
    while(cin >> N >> V)
    {
        if (N == 0 && V == 0) return 0;
 
        dp()? cout<< 1 << endl : cout << 0 << endl;
    }
 
 
    return 0;
}