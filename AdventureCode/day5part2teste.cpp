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
        for (int k = 0; k < 20; k++)
        {
            flag[k] = false;
        }
        cin.ignore();
        getline(cin, temp);
        getline(cin, temp);

        for (int j = 0; j < linhas[i]; j++)
        {
            long long a, b, c;
            cin >> a >> b >> c;
            for (int k = 0; k < 10; k += 2)
            {
                int temp = seeds[k];
                for (int x = 0; x < seeds[k + 1]; x++)
                {
                    if (temp >= b && temp <= b + c && !flag[k])
                    {
                        temp = temp - b + a;
                        flag[k] = true;
                    }
                    temp++;
                }
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (seeds[i] < menor)
            menor = seeds[i];
    }
    cout << menor << endl;

    return 0;
}