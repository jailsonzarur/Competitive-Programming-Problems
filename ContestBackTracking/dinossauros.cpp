#include <bits/stdc++.h>
#define pii pair<int, int> 

using namespace std;

vector<pii> g;

int main()
{
    int n; cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        int temp1, temp2; cin >> temp1 >> temp2;
        g.emplace_back(temp1, temp2);
    }
}