#include <bits/stdc++.h>

using namespace std;

int ops(int x)
{
    if(x == 2) return 2;
    /*if(x/3 == 1)
    {
        if(x == 3) return 1;
        if(x == 4) return 0;
        if(x == 5) return 1; 
    }*/

    int a = x/3, b = x/3;
    int c = x - (a+b);

    if(a+b == c) return 0;

    if(b%2 == 0)
    {
        c += b/2;
        b /= 2;
        if(a+b == c) return 0;
        else if(a+b+1 == c-1) return 0;
        else return 1;
    }else{
        c += b/2;
        b = b/2 + 1;
        if(a+b == c) return 0;
        else if(a+b+1 == c-1) return 0;
        else return 1;
    }



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