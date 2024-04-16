#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()

using namespace std;

const int MAX = 1e6+10;

int main()
{
    int n; cin >> n;
    vector<int> g;
    for( int i = 0 ; i < n ; i++ )
    {
        int num; cin >> num;
        g.push_back(num);
    }
    sort(ALL(g));
    
    cout << g[n-1] - g[0] << endl;
    return 0;

}