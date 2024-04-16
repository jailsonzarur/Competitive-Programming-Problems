#include <bits/stdc++.h>

using namespace std;

int solve(string bandejas)
{
    int comeco = 0;
    for( int i = 0 ; i < bandejas.length() ; i++ )
    {
        if(bandejas[i] == 'C')
        {
            comeco = i;
            break;
        }
    }

    int fim = 0;
    for( int i = bandejas.length()-1 ; i >= 0 ; i-- )
    {
        if(bandejas[i] == 'C')
        {
            fim = i;
            break;
        }
    }

    int movs = 0;
    for( int i = comeco ; i <= fim ; i++ )
    {
        if(bandejas[i] == 'V') movs++;
    }

    return movs;

}

int main()
{
    int n; cin >> n;
    string bandejas; cin >> bandejas;
    cout << solve(bandejas) << endl;
}