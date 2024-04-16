#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long num = 0;
    int n; cin >> n;
    for( int i = 1 ; i <= n ; i++ )
    {
        num += i;
    }
    cout << num << endl;
    return 0;
}