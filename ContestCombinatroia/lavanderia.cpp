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

unsigned long long X;

unsigned long long prod()
{
    ll produto = 1;

    for (int i = 4; i <= X; i++) produto *= i;

    return produto;
}

int main()
{
    optimize;

    while(true)
    {
        cin >> X;
        if (X == 0) return 0;

        cout << prod() << endl;
    }


    return 0;
}