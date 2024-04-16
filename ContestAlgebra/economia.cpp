#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    long long soma = 0;
    long long num = 1;
    for( int i = 0 ; i < n ; i++ )
    {
        soma += num;
        num *= 2;
    }
    cout << soma << endl;
    return 0;
}