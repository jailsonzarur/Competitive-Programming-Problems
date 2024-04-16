#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> num;
    for( int i = 0 ; i < n ; i++ )
    {
        int temp; cin >> temp;
        num.push_back(temp);
    }
    int l, r;
    cin >> l;
    cin >> r;
    
    int cont = 0;
    for( int i = 0 ; i < n ; i++ )
    {
        int temp = num[i];
        for( int j = i+1 ; j < n ; j++ )
        {
            int soma = 0;
            soma = temp + num[j];
            if(soma >= l && soma <= r)
            {
                cont++;
            }
        }
    }

    cout << cont << endl;
    return 0;

}