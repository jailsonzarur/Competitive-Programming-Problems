#include <bits/stdc++.h>

using namespace std;

bool isespecial(int x)
{
    if(x%10 != 0 && x > 10) return false;
    return true;
}

int convertnumber(int x)
{
    return (x/10+1)*10;
}

void solve()
{
    int x, y; cin >> x >> y;
    int a = 0, b = 0, c = 0, d = 0;
    if(!isespecial(x) && !isespecial(y))
    {
        a = convertnumber(x);
        b = convertnumber(y);
        c = a-x;
        d = b-y;

        cout << a << " x " << b << " + " << c << " x " << d << " - " << a << " x " << d << " - " << c << " x " << b << endl;
    }
    else if(isespecial(x) && !isespecial(y))
    {
        a = convertnumber(y);
        b = a-y;
        cout << x << " x " << a << " - " << x << " x " << b << endl;
    }
    else if(isespecial(y) && !isespecial(x))
    {
        a = convertnumber(x);
        b = a - x;
        cout << a << " x " << y << " - " << b << " x " << y << endl;
    }
    else
    {
        cout << x << " x " << y << endl; 
    }   
}

int main()
{
    int n; cin >> n;
    while(n--)
    {
        solve();
    }
}