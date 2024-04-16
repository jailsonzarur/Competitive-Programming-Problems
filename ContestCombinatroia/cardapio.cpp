#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long com = 1;
    for( int i = 0 ; i < 3 ; i++ )
    {
        long long temp; cin >> temp;
        com *= temp;
    }
    cout << com << endl;
    return 0;
}