#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 20000
#define INTMAX 10000
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long
 
using namespace std;
 
int a, b;
 
bool primo(int x)
{
    if (x == 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    
    int tam = sqrt(x);
 
    for (int i = 3; i <= tam; i += 2)
    {
        if (x % i == 0) return false;
    }
 
    return true;
}
 
int main()
{
    optimize;
 
    cin >> a >> b;
 
    for (int i = a; i <= b; i++)
    {
        if (primo(i))
        {
            int temp = i, somador = 0;
 
            while(temp)
            {
                somador += temp % 10;
                temp /= 10;
            }
 
            if (primo(somador)) cout << i << endl;
        }
    }
 
    return 0;
}