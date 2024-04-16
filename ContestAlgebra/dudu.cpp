#include <bits/stdc++.h>

using namespace std;

string op(string num)
{
    long long num1 = stoll(num);
    reverse(num.begin(), num.end());
    long long num2 = stoll(num);
    return to_string(num1 + num2);
}

bool val(string num)
{
    string t1 = num;
    reverse(num.begin(), num.end());
    if(t1 == num) return true;
    else return false;
}

int main()
{   
    string num; cin >> num;
    bool eae = false;
    for( int i = 0 ; i < 4 ; i++ )
    {
        num = op(num);
        eae = val(num);
        if(eae)
        {
            cout << num << endl;
            return 0;
        }
        
    }
    cout << 0 << endl;
    return 0;
}