#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string result = "";
    int temp = 1;
    for( int i = 2 ; i <= n ; i++ )
    {
        string tempi = to_string(i);
        for( int j = tempi.length()-1 ; j >= 0 ; j-- )
        {
            if(tempi[j] != '0')
            {
                temp *= tempi[j] - '0';
                cout << tempi[j] << endl;
                break;
            }
        }
        result = to_string(temp);
        for( int j = result.length()-1 ; j >= 0 ; j-- )
        {
            if(result[j] != '0')
            {
                temp = result[j] - '0';
                break;
            }
        }
    }
    cout << temp << endl;
    return 0;
}