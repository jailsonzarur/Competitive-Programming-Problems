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

void solve()
{
    string s1, s2; cin >> s1 >> s2;
    s2 += s2;
    int found1 = s2.find(s1);
    reverse(s2.begin(), s2.end());
    int found2 = s2.find(s1);
    if(found1 == -1 && found2 == -1)
    {
        cout << "N" << endl;
    }
    else
    {
        cout << "S" << endl;
    }
}

int main() { _

    int n; cin >> n;
    while(n--)
    {
        solve();
    }

    return 0;
}