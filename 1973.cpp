#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    ios::sync_with_stdio(false);
    cin >> n;
    int estrelas[n];
    int estrelastemp[n];
    for (int i = 0; i < n; i++)
    {
        ios::sync_with_stdio(false);
        cin >> estrelas[i];
        estrelastemp[i] = estrelas[i];
    }
    int apontador = 0;
    while (apontador >= 0 && apontador < n)
    {
        if (estrelas[apontador] != 0)
        {
            if (estrelas[apontador] % 2 == 0)
            {
                estrelas[apontador]--;
                apontador--;
            }
            else
            {
                estrelas[apontador]--;
                apontador++;
            }
        }
        else
        {
            apontador--;
        }
    }
    long long soma = 0;
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if(estrelas[i] != estrelastemp[i]) contador++;
        soma += estrelas[i];
    }
    cout << contador << " " << soma << endl;
    return 0;
}
