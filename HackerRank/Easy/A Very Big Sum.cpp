#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long array[n];

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> array[i];
    }

    long long soma = 0;
    for( int i = 0 ; i < n ; i++ )
    {
        soma += array[i];
    }

    cout << soma << endl;
    return 0;

}