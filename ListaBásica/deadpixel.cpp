#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        int a, b, x, y; cin >> a >> b >> x >> y;
        x++, y++;
        priority_queue<int> fila;
        int maior = 0;
        if((y-1)*a > maior) maior = (y-1)*a;
        if((b-y)*a > maior) maior = (b-y)*a;
        if((x-1)*b > maior) maior = (x-1)*b;
        if((a-x)*b > maior) maior = (a-x)*b;
        cout << maior << endl;
    }
    return 0;
}