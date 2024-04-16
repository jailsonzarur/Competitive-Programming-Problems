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

unsigned long long X = 1, Y = 1;

unsigned long long prod()
{
    unsigned long long produto = 1;

    unsigned long long Z = X - Y;

    if (Y > Z)
    {
        while(X > Y) 
        {
            produto *= X;

            if (Z > 1)
            {
                while(produto % Z == 0)
                {
                    produto /= Z;
                    Z--;
                    if (Z == 1) break;
                }
            }

            X--;
        }
    }
    else
    {
        while(X > Z) 
        {
            produto *= X;

            if (Y > 1)
            {
                while(produto % Y == 0)
                {
                    produto /= Y;
                    Y--;
                    if (Y == 1) break;
                }
            }

            X--;
        }
    }

    return produto;
}

int main()
{
    optimize;

    while(true)
    {
        cin >> X >> Y;
        if (X == 0 && Y == 0) return 0;

        unsigned long long solution = prod();
        cout << solution << endl;
    }

    return 0;
}