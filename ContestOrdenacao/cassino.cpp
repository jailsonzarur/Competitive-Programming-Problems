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

priority_queue<int, vector<int>, greater<int>> fila;
int N;

char card(int x)
{
    if (x == 1) return 'A';
    if (x == 11) return 'J';
    if (x == 12) return 'Q';
    if (x == 13) return 'K';
}
int main()
{
    optimize;

    while(cin >> N) fila.push(N);

    while(!fila.empty())
    {
        if (fila.size() == 1) break;
        if (fila.top() >= 2 && fila.top() <= 10) cout << fila.top() << " ";
        else cout << card(fila.top()) << " ";
        fila.pop();
    }

    if (fila.top() >= 2 && fila.top() <= 10) cout << fila.top() << endl;
    else cout << card(fila.top()) << endl;
    return 0;
}