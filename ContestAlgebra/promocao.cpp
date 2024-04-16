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

double quantia, valor;
int idade;

int main()
{
    optimize;
    cin >> quantia >> idade;

    if (idade <= 5) valor = quantia / 2;
    else if (idade < 18) valor = quantia - (quantia * 0.05);
    else if (idade < 60) valor = quantia + (quantia * 0.10);
    else valor = quantia - (quantia * 0.15);

    valor = static_cast<double>(round(valor * 100) / 100);
    cout << fixed << setprecision(2) << valor << endl;

    return 0;
}