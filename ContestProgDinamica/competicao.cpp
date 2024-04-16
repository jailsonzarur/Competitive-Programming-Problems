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
 
int Q, D, P, maior = -1;
 
ll mmc()
{
    ll comum, temp;
    if (P % Q == 0) comum = P;
    else comum = P * Q;
 
    temp = comum;
 
    while((comum / Q) - (comum / P) != D) comum += temp;
 
    return comum;
}
 
int main()
{
    optimize;
 
    while(cin >> Q)
    {
        if (Q == 0) return 0;
 
        cin >> D >> P;
 
        cout << mmc() << endl;
    }
    return 0;
}