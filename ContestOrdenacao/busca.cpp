#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()

using namespace std;

vector<int> mapa;
vector<int> consulta;

void varrerstring(string s)
{
    string num = "";
    int pos = 0;

    for (char digito : s)
    {
        pos++;
        if (digito >= '0' && digito <= '9')
        {
            num += digito;
        }
        if (digito == ' ' || s.size() == pos)
        {
            int nump = stoi(num);
            mapa.push_back(nump);
            num = "";
        }
    }
}

void varrerstring2(string s)
{
    string num = "";
    int pos = 0;

    for (char digito : s)
    {
        pos++;
        if (digito >= '0' && digito <= '9')
        {
            num += digito;
        }
        if (digito == ' ' || s.size() == pos)
        {
            int nump = stoi(num);
            consulta.push_back(nump);
            num = "";
        }
    }
}

int main()
{
    string maps;
    string consult;
    getline(cin, maps);
    getline(cin ,consult);
    varrerstring(maps);
    varrerstring2(consult);
    sort(ALL(consulta));

    

    for (int i : consulta)
    {
        bool esta = false;
        for(int j : mapa)
        {
            if(i == j)
            {
                esta = true;
            }
        }
        if(esta) cout << i << " Está mapeado" << endl;
        else cout << i << " Não está mapeado" << endl;
    }

    return 0;
}