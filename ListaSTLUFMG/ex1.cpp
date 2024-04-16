#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl /*Útil para debugar, printa o nome da variavel e seu valor*/
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _
    
    int n; cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    map<int,int> mp;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> v[i];
        mp[v[i]] = i; 
        v2[i] = v[i];
    }

    sort(v.begin(), v.end());

    for( int i = 0 ; i < n ; i++ )
    {
        v2[mp[v[i]]] = i;
    }
    
    for(auto i : v2) cout << i << " ";

    return 0;
}