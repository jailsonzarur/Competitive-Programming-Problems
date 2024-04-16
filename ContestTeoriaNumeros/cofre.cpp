#include <bits/stdc++.h>

using namespace std;

bool ehprimo(int x)
{
    if(x == 1) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;

    int tam = sqrt(x);

    for( int i = 3 ; i <= tam ; i++ )
    {
        if(x % i == 0) return false;
    }

    return true;
}

int main()
{
    int n; cin >> n;
    int cofres = 0;
    for( int i = 1 ; i <= n ; i++ )
    {
        if(ehprimo(i)) cofres++;
    }
    cout << cofres << endl;
    return 0;
}