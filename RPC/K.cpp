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

bool vogal(char c)
{
    return c == 'A' || c == 'I' || c == 'O' || c == 'E' || c == 'U' || c == 'Y';
}

/*bool pronunciavel(string s)
{
    int cons = 0;
    for(char digitio : s)
    {   
        if(!vogal(digitio)) cons++;
        else cons = 0;
        if(cons > 2) return false;
    }
    return true;
}*/

int main() { _

    int n; cin >> n;
    vector<string> s(n);
    string total = "";
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> s[i];
        total += s[i][0];
    }   

     

    return 0;
}