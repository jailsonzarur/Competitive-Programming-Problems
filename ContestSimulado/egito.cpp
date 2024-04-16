#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
 
using namespace std; 
 
int N;
 
int main()
{
    optimize;
 
    cin >> N;
 
    int tam = 1 + (N - 1) * 2;
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= tam / 2 + i; j++)
        {
            if (j >= tam / 2 - i) cout << '#';
            else cout << ' ';
        }
 
        cout << endl;
    }
 
    return 0;
}