#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> array[i];
    }

    int soma = 0;
    for( int i = 0 ; i < n ; i++ )
    {
        soma += array[i];
    }

    cout << soma << endl;
    return 0;
}