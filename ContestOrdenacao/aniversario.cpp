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

priority_queue<string, vector<string>, greater<string>> fila;
int N;

int main()
{
    optimize;

    cin >> N;

    while (N--) 
    {
        string temp;
        cin >> temp;
        fila.push(temp);
    }

    while(!fila.empty())
    {
        cout << fila.top() << endl;
        fila.pop();
    }
    return 0;
}