#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long fib[101];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    fib[3] = 1;
    int n; cin >> n;
    for( int i = 4 ; i <= n ; i++ )
    {
        fib[i] = fib[i-1] + fib[i-2] + fib[i-3];
    }
    cout << fib[n] << endl;
    return 0;
}