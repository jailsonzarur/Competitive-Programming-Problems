#include <bits/stdc++.h>

using namespace std;

long long mdc(long long num1, long long num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main()
{
    int n; cin >> n;
    long long mdcresult;
    for( int i = 0 ; i < n ; i++ )
    {
        long long num1, num2;
        cin >> num1 >> num2;
        if(num1 > num2)
        {
            mdcresult = mdc(num1, num2);
        }
        else
        {
            mdcresult = mdc(num2, num1);
        }
        cout << mdcresult << endl;
    }
    return 0;
}