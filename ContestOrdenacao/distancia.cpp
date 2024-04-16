#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()

using namespace std;

const int MAX = 1e6+10;

vector<vector<pair<int, int>>> g(MAX);


int main()
{
    int n; cin >> n;
    int maior = 0;
    for( int i = 0 ; i < n ; i++ )
    {
        int d1, d2;
        cin >> d1 >> d2;
        pair<int, int> par;
        par.first = d1;
        par.second = d2;
        int distancia = d1-d2;
        if(distancia < 0){
            distancia *= -1;
        }
        g[distancia].push_back(par);
        if(distancia > maior)
        {
            maior = distancia;
        }
    }

    for( int i = 0 ; i <= maior ; i++ )
    {
        for( pair<int,int> v : g[i] )
        {
            cout << v.first << " " << v.second << endl;
        }
    }

    
    return 0;

}