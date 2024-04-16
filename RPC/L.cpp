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
    
    int r, c, k; cin >> r >> c >> k;
    vector<string> antiga(r);
    vector<string> padrao(r);

    for( int i = 0 ; i < r ; i++ )
    {
        cin >> antiga[i];
        cin >> padrao[i];

        bool vispadrao = false, visantiga = false;

        for(char digito : antiga[i])
        {
            if(digito == '-')
            {
                visantiga = true;
                break;
            }
        }

        for(char digito : padrao[i])
        {
            if(digito == '*')
            {
                vispadrao = true;
                break;
            }
        }

        if(visantiga && vispadrao)
        {
            cout << "N" << endl;
            return 0;
        }

    }

    cout << "Y" << endl;

    

    return 0;
}