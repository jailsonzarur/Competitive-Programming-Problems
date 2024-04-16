#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<int> pacientes(n);
    vector<bool> vis(n);

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> pacientes[i];
    }
    
    int maior1 = 0;
    int iesimo1 = 0;
    for( int i = 0 ; i < n ; i++ )
    {
        if(pacientes[i] > maior1 && !vis[i])
        {
            maior1 = pacientes[i];
            iesimo1 = i;
        }
    }
    vis[iesimo1] = true;

    int maior2 = 0;
    int iesimo2 = 0;
    for( int i = 0 ; i < n ; i++ )
    {
        if(pacientes[i] > maior2 && !vis[i] && !(iesimo1-1 == i || iesimo1+1 == i))
        {
            maior2 = pacientes[i];
            iesimo2 = i;
        }
    }
    vis[iesimo2] = true;

    int soma = 0;
    int vezes = 0;
    while(true)
    {
        soma += maior1;
        vezes++;
        if(soma >= k) break;
        soma += maior2;
        vezes++;
        if(soma >= k) break;
    }
    cout << vezes << endl;
    return 0;

}