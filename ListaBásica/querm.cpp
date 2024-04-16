#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pos = 1;
    while(true)
    {
        int n; cin >> n;
        if(n == 0) break;
        int ganhador;
        for( int i = 1 ; i <= n ; i++ )
        {
            int temp; cin >> temp;
            if(temp == i) ganhador = temp; 
        }
        cout << "Teste " << pos << endl << ganhador << endl << endl;
        pos++;
    }
    return 0;
}