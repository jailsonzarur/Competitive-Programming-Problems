#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q; cin >> Q;
    int bolhas1 = 0;
    for( int i = 0 ; i < Q ; i++ )
    {
        int D; cin >> D;
        int soma = 0;
        for( int j = 1 ; j <= D ; j++ )
        {
            if(j == 1) soma += 4;
            if(j == 2) soma += 3;
            if(j == 3) soma += 2;
            if(j >= 4) soma += 1;
        }
        if( (soma-9) >= 0 ) 
        {
            bolhas1 += soma - 9;
        }
    }
    cout << bolhas1 << endl;
    return 0;
}