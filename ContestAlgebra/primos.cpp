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

int A, B;
vector<int> primos;

bool primo(int num)
{
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0) return false;
    }

    return true;
}

int main()
{
    optimize;

    cin >> A >> B;

    if (A == 2) cout << "2 ";

    if (A % 2 == 0)
    {
        for (int i = A + 1; i < B; i += 2)
        {
            if (primo(i)) primos.push_back(i);
        }
    }
    else
    {
        for (int i = A + 2; i < B; i += 2)
        {
            if (primo(i)) primos.push_back(i);
        }
    }


    for (int i = 0; i < primos.size(); i++)
    {
        if (i == primos.size() - 1)
        {
            cout << primos[i] << endl;
            break;
        }

        cout << primos[i] << " ";
    }

    return 0;
}