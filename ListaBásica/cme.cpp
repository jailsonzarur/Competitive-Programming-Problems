#include <bits/stdc++.h>

using namespace std;

int ops(int x)
{
    if(x < 3) return 2;
    int a, b, c;
    a = x/3, b = x/3;
    c = x - (a+b);
    while(a+b != c)
    {
        if(a > 1)
        {
            a--;
            c++;
        } 
        else if(b > 1)
        {
            b--;
            c++;
        }
        if(a + b < c)
        {
            c--;
            a++;
        }
        if(a+b > c) return 1;
        else if(a+b == c) return 0;
        
    }
    return 0;
}

int main()
{
    int n; cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        int x; cin >> x;
        cout << ops(x) << endl;
    }
    return 0;
}