#include <bits/stdc++.h>

using namespace std;

int main() 
{
    while(true) 
    {
        int n;
        cin >> n;
        if(n == 0) break;
        for( int i = 0 ; i < n ; i++ )
        {
            int num;
            cin >> num;
            if((num-2)%2 == 0)
            {
                cout << (num-2)*2 + 2 << endl;
            }
            else
            {
                cout << (num-1) * 2 + 1 << endl;
            }
        }
    }
    return 0;
}