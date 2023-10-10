#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 3501;
    int primos[n];
    primos[0] = 2;
    primos[1] = 3;
    for (int i = 2; i < n; i++)
    {
        for (int j = primos[i - 1] + 2;; j += 2)
        {
            bool prime = true;
            for (int k = 3; k <= sqrt(j); k += 2)
            {
                if (j % k == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime)
            {
                primos[i] = j;
                break;
            }
            else
            {
                continue;
            }
        }
    }

    while (true)
    {
        int N;
        cin >> N;
        if(!N) break;
        bool pessoas[N];
        for (int i = 0; i < N; i++)
        {
            pessoas[i] = true;
        }

        int mortos = 0;
        int ponto = primos[0] - 1;
        pessoas[ponto] = false;
        mortos++;

        for (int i = 1; i < n; i++)
        {
            int contmenor = 0;
            int cont = primos[i];
            while (contmenor < cont)
            {
                int next = ponto + 1;
                if (next == N)
                    next = 0;
                if (pessoas[next])
                    contmenor++;
                ponto++;
                if (ponto == N)
                    ponto = 0;
            }
            mortos++;
            pessoas[ponto] = false;
            if (mortos == N - 1)
                break;
        }

        for (int i = 0; i < N; i++)
        {
            if (pessoas[i])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}