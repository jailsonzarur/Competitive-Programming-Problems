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
 
int N, L;
vector<int> v, w;
 
ll memo[110][1010];
 
ll dp(int cap, int item)
{
    if (cap < 0) return -LINF;
    if (item == N) return 0;
    ll &p = memo[item][cap];
 
    if (p != -1) return p;
 
    return p = max(dp(cap, item + 1), dp(cap - w[item], item + 1) + v[item]);
}
 
int main()
{
    optimize;
 
    while(cin >> N)
    {
        if (N == 0) return 0;
        v.clear();
        w.clear();
        v.resize(N);
        w.resize(N);
 
        for (int i = 0; i < N; i++) cin >> v[i] >> w[i];
 
        cin >> L;
 
        memset(memo, -1, sizeof memo);
 
        cout << dp(L, 0) << endl;
    }
    return 0;
}