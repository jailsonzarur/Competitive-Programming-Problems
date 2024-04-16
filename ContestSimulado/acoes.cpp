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
 
ll N, D, P, pos1 = -INF, pos2 = -INF;
double maior = -INF;
 
int main()
{
    optimize;
 
    cin >> N;
 
    while(N--)
    {
        cin >> D >> P;
 
        if (D * 1.0 / P > maior) 
        {
            maior = D * 1.0 / P;
            pos1 = D;
            pos2 = P;
        } 
    }
 
    cout << pos1 << " " << pos2 << endl;
 
    return 0;
}