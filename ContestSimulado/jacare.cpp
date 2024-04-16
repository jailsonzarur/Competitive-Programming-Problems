#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 1000
 
using namespace std; 
 
string temp;
 
bool solution()
{
    vector<bool> visitados(10, false);
    for (char digito : temp)
    {
        if (digito == '1' || digito == '0' || visitados[digito - '0']) return true;
        visitados[digito - '0'] = true;
    }
 
    return false;
}
 
int main()
{
    optimize;
 
    cin >> temp;
 
    if (solution())
    {
        cout << "Nao\n";
        return 0;
    }
    else cout << "Sim\n";
 
    return 0;
}