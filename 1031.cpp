#include <bits/stdc++.h>

using namespace std;

int main()
{


    while (true)
    {
        int N;
        int cont = 1;
        cin >> N;
        if (!N)
            break;
        bool postes[N];
        while (true)
        {
            for (int i = 0; i < N; i++)
            {
                postes[i] = true;
            }

            int mortos = 0;
            int ponto = 0;
            int contmenor = 0;
            postes[0] = false;
            mortos++;

            while (mortos < N - 1)
            {
                while (contmenor < cont)
                {
                    int next = ponto + 1;
                    if (next == N)
                        next = 0;
                    if (postes[next])
                        contmenor++;
                    ponto++;
                    if (ponto >= N)
                        ponto = 0;
                }
                mortos++;
                postes[ponto] = false;
                if (ponto == 12)
                {
                    cont++;
                    break;
                }
                contmenor = 0;
            }

            if(postes[12]) break;

        }
        cout << cont << endl;
        cont = 1;
    }

    return 0;
}