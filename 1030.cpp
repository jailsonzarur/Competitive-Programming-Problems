#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    long long vezes;
    ios::sync_with_stdio(false);
    cin >> vezes;
    for (long long j = 0; j < vezes; j++)
    {
        ios::sync_with_stdio(false);
        cin >> n >> k;
        vector<long long> pessoas(n);
        long long num = 1;
        for( long long i = 0 ; i < n ; i++ ){
            pessoas[i] = num;
            num++;
        }
        long long i = k - 1;
        while (pessoas.size() > 1)
        {

            pessoas.erase(pessoas.begin() + i);
            if (i + k - 1 >= pessoas.size())
            {
                long long temp = (i + k - pessoas.size() - 1);
                i = temp;
            }
            else
            {
                i += k - 1;
            }
        }
        cout << "Case " << j+1 << ": " << pessoas[0] << endl;

    }

}