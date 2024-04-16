#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;
int N = 0;

vector<long long> num;

void converter(string nums)
{
    string opa = "";
    for(char digito : nums)
    {
        if(digito >= '0' && digito <= '9') opa += digito;
        else if(digito = ' '){
            num.push_back(stoll(opa));
            N++;
            opa = "";
            continue;
        }
    }
}

int main()
{
    string nums;
    getline(cin, nums);
    nums += " ";
    converter(nums);
    sort(num.begin(), num.end());
    for( int i = 0 ; i < N-1 ; i++ )
    {
        cout << num[i] << " ";
    }
    cout << num[N-1] << endl;
    for( int i = N-1 ; i > 0 ; i-- )
    {
        cout << num[i] << " ";
    }
    cout << num[0] << endl;
    return 0;
}   