#include <bits/stdc++.h>

using namespace std;

string matrizcards[1000];
int matriznumber[1000];
map<string, int> mapacards;
map<string, int> mapacards2;
map<string, int>::iterator it = mapacards.begin();

int peso(char digito)
{
    int peso = 0;
    if (digito == 'J')
        peso++;
    if (digito == '2')
        peso += 2;
    if (digito == '3')
        peso += 3;
    if (digito == '4')
        peso += 4;
    if (digito == '5')
        peso += 5;
    if (digito == '6')
        peso += 6;
    if (digito == '7')
        peso += 7;
    if (digito == '8')
        peso += 8;
    if (digito == '9')
        peso += 9;
    if (digito == 'T')
        peso += 10;
    if (digito == 'Q')
        peso += 11;
    if (digito == 'K')
        peso += 12;
    if (digito == 'A')
        peso += 13;

    return peso;
}

bool comparacao(string c1, string c2)
{
    bool maior = false;
    for (int i = 0; i < c1.length(); i++)
    {
        int peso1 = peso(c1[i]);
        int peso2 = peso(c2[i]);
        if (peso1 != peso2)
        {
            if (peso1 > peso2)
            {
                maior = true;
                break;
            }
            else
            {
                maior = false;
                break;
            }
        }
    }
    return maior;
}

void analise(string card)
{
    int cod = 0;
    int maiorquant = 0;
    for (int i = 0; i < card.length(); i++)
    {
        int quant = 0;
        if (card[i] == 'J')
            continue;
        for (int j = 0; j < card.length(); j++)
        {
            if (card[i] == card[j])
                quant++;
        }
        if (quant > maiorquant)
            maiorquant = quant;
        cod += quant;
    }

    int quantJ = 0;
    bool temj = false;
    for (int i = 0; i < card.length(); i++)
    {
        if (card[i] == 'J')
        {
            quantJ++;
            temj = true;
        }
    }

    if (temj)
    {
      cod += quantJ*(maiorquant+quantJ) + maiorquant*quantJ;
    }
    
    cout << cod << endl;
    cout << endl;
    mapacards[card] = cod;
}

// five = 0 ; four = 1 ; full = 2 ; three = 3 ; two = 4 ; one = 5 ; high = 6 ;
vector<vector<string>> types(7);
void conjuntos()
{
    map<string, int>::iterator it = mapacards.begin();
    while (it != mapacards.end())
    {
        if (it->second == 25)
            types[0].push_back(it->first);
        if (it->second == 17)
            types[1].push_back(it->first);
        if (it->second == 13)
            types[2].push_back(it->first);
        if (it->second == 11)
            types[3].push_back(it->first);
        if (it->second == 9)
            types[4].push_back(it->first);
        if (it->second == 7)
            types[5].push_back(it->first);
        if (it->second == 5)
            types[6].push_back(it->first);
        ++it;
    }
}

void ordenacao()
{
    for (int i = 0; i < 7; i++)
    {
        for (int k = types[i].size(); k >= 0; k--)
        {
            for (int j = 1; j < k; j++)
            {
                cout << "OPA" << endl;
                if (comparacao(types[i][j - 1], types[i][j]))
                {
                    string temp = types[i][j];
                    types[i][j] = types[i][j - 1];
                    types[i][j - 1] = temp;
                }
            }
        }
    }
}

int main()
{
    int numlinhas;
    cin >> numlinhas;
    for (int i = 0; i < numlinhas; i++)
    {
        string temp;
        int temp1;
        cin >> temp;
        matrizcards[i] = temp;
        cin >> temp1;
        matriznumber[i] = temp1;
        mapacards2[temp] = temp1;
    }

    for (int i = 0; i < numlinhas; i++)
    {
        analise(matrizcards[i]);
    }
    conjuntos();
    ordenacao();

    map<string, int>::iterator it = mapacards.begin();
    while (it != mapacards.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }

    long long soma = 0;
    int rank = 1;
    for (int i = 6; i >= 0; i--)
    {
        for (auto w : types[i])
        {
            cout << w << " ";
            map<string, int>::iterator it = mapacards2.begin();
            long long temp = mapacards2.find(w)->second;
            soma += temp * rank;
            rank++;
        }
        cout << endl;
    }

    cout << soma << endl;
    return 0;
}