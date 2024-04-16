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
    string temp; cin >> temp;
    map<char, int> mp;
    for(char digito : temp) mp[digito]++;

    while(mp['n']--)
    {
        if(mp['n'] == 0 && !mp['z']) cout << 1 << endl;
        else cout << 1 << " ";
    } 
    while(mp['z']--)
    {
        if(mp['z'] == 0) cout << 0 << endl;
        else cout << 0 << " ";
    } 

    return 0;
}