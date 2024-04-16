#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()

using namespace std;

const int MAX = 1e6+10;

vector<vector<string>> g(MAX);

int main()
{
    int n; cin >> n;
    int maior = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        string palavra;
        cin >> palavra;
        g[palavra.size()].push_back(palavra);
        if(palavra.size() > maior)
        {
            maior = palavra.size();
        }
    }

    for( int i = 1 ; i <= maior ; i++ ) 
    {
        sort(ALL(g[i]));
        for(string s : g[i])
        {
            cout << s << endl;
        }
    }

    
    return 0;

}