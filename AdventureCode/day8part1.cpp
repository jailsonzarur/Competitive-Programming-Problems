#include <bits/stdc++.h>

using namespace std;

string matriz[750][3];
int numlinhas;
string navigate;
int steps = 0;
int posA;
long long n = 0;

void fazmtariz(int pos, string linha)
{
    matriz[pos][0] = linha.substr(0, 3);
    matriz[pos][1] = linha.substr(7, 3);
    matriz[pos][2] = linha.substr(12, 3);
}

int achar(string posicao)
{
    for (int i = 0; i < numlinhas; i++)
    {
        if (matriz[i][0] == posicao)
            return i;
    }
}

void caminho()
{
    int pos = posA;
    int terminou = true;
    while (terminou)
    {
        for (char digito : navigate)
        {
            n++;
            if (digito == 'L')
            {
                pos = achar(matriz[pos][1]);
                if (matriz[pos][0] == "ZZZ")
                {
                    terminou = false;
                    break;
                }
            }

            if (digito == 'R')
            {
                pos = achar(matriz[pos][2]);
                if (matriz[pos][0] == "ZZZ")
                {
                    terminou = false;
                    break;
                }
            }
        }
    }
}

int main()
{
    cin >> numlinhas;
    cin >> navigate;
    cin.ignore();
    string temp;
    getline(cin, temp);
    for (int i = 0; i < numlinhas; i++)
    {
        string tmp;
        getline(cin, tmp);
        fazmtariz(i, tmp);
    }

    for (int i = 0; i < numlinhas; i++)
    {

        if (matriz[i][0] == "AAA")
        {
            posA = i;
        }
    }

    caminho();
    cout << n << endl;

    /*for (int i = 0; i < numlinhas; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }*/

    return 0;
}