#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 100
#define INTMAX 10000000000
#define pii pair<int, int> 
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long

using namespace std;

int N;
double nota, minimo, maximo;

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        cin >> nota >> minimo >> maximo;

        if (nota > minimo && nota < maximo) cout << "True\n";
        else cout << "False\n";
    }

    return 0;
}