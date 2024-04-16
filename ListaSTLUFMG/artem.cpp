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
    
    int tests; cin >> tests;
    while(tests--)
    {
        int n, m; cin >> n >> m;
        char matriz[n][m];
        for( int i = 0 ; i < n ; i++ )
        {
            for( int j = 0 ; j < m ; j++ )
            {
                if(i == 0 && j == 0) matriz[i][j] = 'W';
                else matriz[i][j] = 'B';
                cout << matriz[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}