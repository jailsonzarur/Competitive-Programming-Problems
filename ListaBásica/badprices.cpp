#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        int n2; cin >> n2;
        vector<int> v(n2);
        for( int j = 0 ; j < n2 ; j++ )
        {
            cin >> v[j];
        }
        int mini = v[n2-1];
        int ans = 0;
        for( int j = n2-2 ; j >= 0 ; j-- )
        {
            if(v[j] > mini) ans++;
            else mini = min(v[j], mini);
        }
        cout << ans << endl;
    }
}