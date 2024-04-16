#include <bits/stdc++.h>
#define pii pair<int, int> 
#define pid pair<int, double> 
#define pss pair<string, string> 

using namespace std;

const int MAX = 1e6+10;

vector<vector<string>> rotas(MAX);
vector<pss> caminhos(MAX);
vector<pid> dist(MAX);
vector<double> precorota(MAX, 0);
vector<double> horarota(MAX, 0);


void insere(string msg, int i)
{
    string temp = "";
    int pos = 0;
    for(char digito : msg)
    {
        if(digito == ' ')
        {
            rotas[i].push_back(temp);
            temp = "";
            continue;
        }
        temp += digito;
        pos++;
    }
    rotas[i].push_back(temp);
}

int main()
{
    int n; cin >> n;
    cin.ignore();
    for( int i = 0 ; i < n ; i++ )
    {
        string temp;
        getline(cin, temp);
        insere(temp, i);
    }

    int m; cin >> m;
    for( int i = 0 ; i < m ; i++ )
    {
        string temp1, temp2;
        cin >> temp1 >> temp2;
        int horas; cin >> horas;
        double preco; cin >> preco;
        caminhos.emplace_back(temp1, temp2);
        dist.emplace_back(horas, preco);
    }

    for( int i = 0 ; i < n ; i++ )
    {
        for(int j = 1; j < rotas[i].size(); j++)
        {
            string pro1 = rotas[i][j-1];
            string pro2 = rotas[i][j];
            pss t = {pro1, pro2};
            int pos2 = 0;
            for(pss v : caminhos)
            {
                if(t == v)
                {
                    precorota[i] += dist[pos2].second;
                    horarota[i] += dist[pos2].first;
                    break;
                }
                pos2++;
            }
        }
    }

    double menorpreco = precorota[0];
    int posmenorpreco;
    double menorhora = horarota[0];
    int posmenorhora;
    for(int i = 1; i < 3; i++)
    {
        if(precorota[i] < menorpreco)
        {
            menorpreco = precorota[i];
            posmenorpreco = i;  
        } 
        if(horarota[i] < menorhora)
        {
            menorhora = horarota[i];
            posmenorhora = i;
        } 
    }

    if(posmenorhora != posmenorpreco)
    {
        if(precorota[posmenorhora] <= precorota[posmenorpreco]*1.2)
        {
            for(string s : rotas[posmenorhora]) cout << s << " ";
            cout << endl;
        }
        else
        {
            for(string s : rotas[posmenorpreco]) cout << s << " ";
            cout << endl;
        }
    }
    
    return 0;
}