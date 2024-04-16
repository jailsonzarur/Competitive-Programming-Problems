#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    unsigned long long num = 1;
    for( int i = 0 ; i < n ; i++ )
    {
        int temp; cin >> temp;
        num *= temp;
    }
    cout << num << endl;
    return 0;
}