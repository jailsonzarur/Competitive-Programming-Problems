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
map<string, int> votacao;
map<string, int> :: iterator it;
priority_queue<pair<int, string>> fila;

int main()
{
    optimize;

    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        string temp;
        cin >> temp;
        votacao[temp]++;
    }

    for(it=votacao.begin(); it!=votacao.end(); ++it)
    {
        fila.push({it -> second, it -> first});
    }

    while (!fila.empty())
    {
        cout << fila.top().second << endl;
        fila.pop();
    }

    return 0;
}