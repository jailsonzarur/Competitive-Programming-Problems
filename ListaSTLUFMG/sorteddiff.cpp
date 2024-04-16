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
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(auto& i : v) cin >> i;
        sort(v.begin(), v.end());

        stack<int> s;

        for( int i = 0, j = 0, k = n-1 ; i < n ; i++ )
        {
            if(i%2 == 0) s.push(v[j++]);
            else s.push(v[k--]);
        }

        while(s.size() > 1)
        {
            cout << s.top() << " ";
            s.pop();
        }

        cout << s.top() << endl;

    }

    return 0;
}