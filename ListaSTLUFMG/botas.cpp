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
    map<int, pair<int, int>> mp; 
    while(n--)
    {
        int M; cin >> M;
        char L; cin >> L;

        if(L == 'E') mp[M].first++;
        else mp[M].second++;

    }

    int total = 0;
    for(auto m : mp)
    {
        total += min(m.second.first, m.second.second);
    }

    cout << total << endl;

    return 0;
}