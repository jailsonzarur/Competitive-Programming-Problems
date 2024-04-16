#include <bits/stdc++.h>

using namespace std;

long long menor = 30000000000;

int main()
{
    long long seeds[20];
    int linhas[7];
    bool flag[20];
    for (int i = 0; i < 20; i++)
    {
        flag[i] = false;
        cin >> seeds[i];
    }

    for (int i = 0; i < 7; i++)
    {
        cout << "Linhas: " << i + 1 << ":";
        cin >> linhas[i];
    }

    for (int i = 0; i < 7; i++)
    {
        string temp;
        for( int k = 0 ; k < 20 ; k++ ) {
            flag[k] = false;
        }
        cin.ignore();
        getline(cin, temp);
        getline(cin, temp);

        for (int j = 0; j < linhas[i]; j++)
        {
            long long a, b, c;
            cin >> a >> b >> c;
            for ( int k = 0 ; k < 20 ; k++ )
            {
                if (seeds[k] >= b && seeds[k] <= b + c && !flag[k])
                {
                    seeds[k] = seeds[k] - b + a;
                    flag[k] = true;
                }
            }
        }
    }

    for( int i = 0 ; i < 20 ; i++ ){
        if(seeds[i] < menor) menor = seeds[i];
    }
    cout << menor << endl;

    return 0;
}