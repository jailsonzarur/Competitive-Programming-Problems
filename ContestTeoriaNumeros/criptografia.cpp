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
 
int N;
vector<int> primos;
 
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
 
int solution()
{
    for (auto num1 : primos)
    {
        for (auto num2 : primos)
        {
            int multi = num1 * num2;
 
            if (multi == N) return 1;
            else if (multi > N) break;
        }
    }
 
    return false;
}
 
int main()
{
    optimize;
 
    cin >> N;
 
    if (N == 2)
    {
        cout << 0 << endl;
        return 0;
    }
 
    for (int i = 3; i < N; i += 2)
    {
        if (N % i == 0) 
        {
            if (primo(i)) primos.push_back(i);
        }
    }
 
    cout << solution() << endl;
 
    return 0;
}