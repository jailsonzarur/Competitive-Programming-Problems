#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 20000
#define INTMAX 10000
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long
 
using namespace std;
 
ll N, temp, cont = 0;
 
bool primo(ll x)
{
    if (x == 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    
    ll tam = sqrt(x);
 
    for (ll i = 3; i <= tam; i += 2)
    {
        if (N % i == 0) return false;
    }
 
    return true;
}
 
int main()
{
    optimize;
 
    cin >> N;
 
    for (ll i = 0; i < N; i++)
    {
        cin >> temp;
 
        if (primo(temp)) cont++;
    }
 
    cout << cont << endl;
 
    return 0;
}