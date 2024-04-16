#include <bits/stdc++.h>

using namespace std;

int ops(int x, int y)
{
    if(x == y) return 0;
    if((x-y)%2 == 0 && x > y) return 1;
    if((x-y)%2 == 0 && x < y) return 2;
    if((x-y)%2 != 0 && x > y) return 2;
    if((x-y)%2 != 0 && x < y) return 1;
}

int main()
{
    int n; cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        int x, y; cin >> x >> y;
        cout << ops(x, y) << endl;
    }
    return 0;
}