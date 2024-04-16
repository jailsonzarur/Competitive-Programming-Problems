#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 20000
#define INTMAX 10000000000
#define pii pair<int, int> 
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long
 
using namespace std;
 
ll N, a, b, c, d, e, f;
ll d1, d2, d3;
 
double distancia(ll x1, ll y1, ll x2, ll y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
 
bool triangulo(ll lado1, ll lado2, ll lado3)
{
    if (abs(lado2 - lado3) >= lado1 || lado1 >= lado2 + lado3) return false;
    if (abs(lado1 - lado3) >= lado2 || lado2 >= lado1 + lado3) return false;
    if (abs(lado1 - lado2) >= lado3 || lado3 >= lado1 + lado2) return false;
    return true;
}
 
int main()
{
    optimize;
 
    cin >> N;
 
    while (N--)
    {   
        cin >> a >> b >> c >> d >> e >> f;
 
        d1 = distancia(a, b, c, d);
        d2 = distancia(a, b, e, f);
        d3 = distancia(c, d, e, f);
 
        if (triangulo(d1, d2, d3)) cout << "sim\n";
        else cout << "nao\n";
    }
 
    return 0;
}