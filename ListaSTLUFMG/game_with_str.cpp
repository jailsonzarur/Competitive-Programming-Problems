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
    
    string s;
    cin >> s;
    int qtd = 0;
    
    for( int i = 1 ; i < s.size() ; i++ )
    {
        if(s[i] == s[i-1])
        {
            s.erase(i-1, 2);
            qtd++;
            i -= 2;
        }
    }

    if(qtd%2 == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}