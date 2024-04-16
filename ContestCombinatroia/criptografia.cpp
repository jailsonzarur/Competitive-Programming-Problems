#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    unsigned long long num = 1;
    num *= 10;
    for( int i = 0 ; i < n-1 ; i++ )
    {
        num *= 9;
    }
    cout << num << endl;
    return 0;
}