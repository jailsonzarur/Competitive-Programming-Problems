#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int matriz[n][m];
    int maior = 0;
    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++ )
        {
            cin >> matriz[i][j];
        }
    }

    for( int i = 0 ; i < n ; i++ )
    {
        int soma = 0;
        for( int j = 0 ; j < m ; j++ )   
        {
            soma += matriz[i][j];
        }
        if(soma > maior) maior = soma;
    }

    for( int i = 0 ; i < m ; i++ )
    {
        int soma = 0;
        for( int j = 0 ; j < n ; j++ )   
        {
            soma += matriz[j][i];
        }
        if(soma > maior) maior = soma;
    }

    

    cout << maior << endl;
    return 0;
}