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
string binario;

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        cin >> binario;
        ll soma = 0;

        for (int i = 0 ;i < binario.size(); i++)
        {
            if (binario[i] == '1') 
            {
                soma += pow(2, binario.size() - 1 - i);
            }
        }

        cout << soma << endl;
    }

    return 0;
}