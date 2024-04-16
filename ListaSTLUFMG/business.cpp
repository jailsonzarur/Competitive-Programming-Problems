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
    
    int k; cin >> k;
    vector<int> meses(12);
    for( int i = 0 ; i < 12 ; i++ )
    {
        cin >> meses[i];
    }

    sort(meses.begin(), meses.end(), greater<>());

    int k2 = 0;
    int pos = 0;
    while(k2 < k && pos < 12)
    {
        k2 += meses[pos++];
    }

    if(k2 < k) cout << -1 << endl;
    else cout << pos << endl;

    return 0;
}