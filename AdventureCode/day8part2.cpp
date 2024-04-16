#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;

string matriz[7][3];
int numlinhas;
string navigate;
int posA;
long long n = 0;

vector<vector<int>> g(MAX);

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
    int u, v;
    while (terminou)
    {
        for (char digito : navigate)
        {
            if (digito == 'L')
            {
                u = pos;
                v = achar(matriz[pos][1]);
                pos = achar(matriz[pos][1]);
                cout << pos << endl;
                g[u].push_back(v);
                g[v].push_back(u);
                if (matriz[pos][0] == "ZZZ")
                {
                    u = pos;
                    v = achar(matriz[pos][0]);
                    g[u].push_back(v);
                    g[v].push_back(u);
                    terminou = false;
                    break;
                }
            }

            if (digito == 'R')
            {
                u = pos;
                v = achar(matriz[pos][1]);
                pos = achar(matriz[pos][1]);
                cout << pos << endl;
                g[u].push_back(v);
                g[v].push_back(u);
                if (matriz[pos][0] == "ZZZ")
                {
                    u = pos;
                    v = achar(matriz[pos][0]);
                    g[u].push_back(v);
                    g[v].push_back(u);
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

    int quant = 0;
    for( int i = 0 ; i < numlinhas ; i++ ) 
    {
        for( int w : g[i] )
        {
            cout << w << " ";
        }
        cout << endl;
    }
    cout << quant << endl;
    return 0;
}