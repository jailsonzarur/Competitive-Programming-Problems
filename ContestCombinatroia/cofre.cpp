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

unsigned long long N, V;

int main()
{
    optimize;

    cin >> N >> V;

    unsigned long long prod = pow(V, N);

    cout << prod << endl;

    return 0;
}