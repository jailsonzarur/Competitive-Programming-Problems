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
    while(n--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        for( int i = 0 ; i < a.length() ; i++ )
        {
            
            if(a[i] == c[i]) swap(b[i], c[i]);
            else if(b[i] == c[i]) swap(a[i], c[i]);
            else swap(b[i], c[i]);
        }
        cout << (a == b ? "YES\n" : "NO\n");
    }

    return 0;
}