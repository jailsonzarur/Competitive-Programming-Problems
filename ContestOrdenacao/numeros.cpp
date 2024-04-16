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
vector<int> pares, impares;

int main()
{
    optimize;

    cin >> N;

    while(N--)
    {
        int temp;
        cin >> temp;

        if (temp % 2 == 0) pares.push_back(temp);
        else impares.push_back(temp);
    }

    sort(ALL(pares));
    sort(ALL(impares));

    int tam1 = impares.size(), tam2 = pares.size();

    if (tam1 != 0) 
    {
        cout << impares[0];
        for (int i = 1; i < tam1; i++) cout << " " << impares[i];
        for (int i = 0; i < tam2; i++) cout << " " << pares[i];
    }
    else if (tam2 != 0) 
    {
        cout << pares[0];
        for (int i = 1; i < tam2; i++) cout << " " << pares[i];
    }
    cout << endl;

    return 0;
}