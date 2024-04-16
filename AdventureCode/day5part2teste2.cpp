#include <bits/stdc++.h>

using namespace std;

long long menor = 30000000000;

int main()
{
    long long seeds[20];
    int linhas[7];
    int linhamatriz = 0;
    for (long long i = 0; i < 20; i++)
    {
        cin >> seeds[i];
    }
    for (long long i = 0; i < 7; i++)
    {
        cout << "Linhas: " << i + 1 << ":";
        cin >> linhas[i];
        linhamatriz += linhas[i];
    }
    long long matriz[linhamatriz][3];
    long long pos = 0;
    for (long long j = 0; j < 7; j++)
    {
        string temp;
        cin.ignore();
        getline(cin, temp);
        getline(cin, temp);
        for (long long i = 0; i < linhas[j]; i++)
        {
            cin >> matriz[pos][0] >> matriz[pos][1] >> matriz[pos][2];
            pos++;
        }
    }
    for (long long s = 0; s < 20; s+=2)
    {
        for (long long k = 0; k < seeds[s + 1]; k++)
        {
            long long tempseed = seeds[s] + k;
            long long pos2 = 0;
            for (int i = 0; i < 7; i++)
            {
                bool flag = false;
                for (long long j = 0; j < linhas[i]; j++)
                {
                    if (tempseed >= matriz[pos2][1] && tempseed <= matriz[pos2][1] + matriz[pos2][2] && !flag)
                    {
                        tempseed = tempseed - matriz[pos2][1] + matriz[pos2][0];
                        flag = true;
                    }
                    pos2++;
                }
            }
            cout << tempseed << endl;
            if(tempseed < menor) menor = tempseed;
        }
    }
    
    cout << menor << endl;
    return 0;
}