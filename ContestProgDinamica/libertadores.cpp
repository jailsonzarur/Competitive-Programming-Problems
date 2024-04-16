#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;

vector<vector<int>> jogos;

void convert(string msg, int i)
{
    bool passoux = false;
    string num1 = "";
    string num2 = "";
    for(char digito : msg)
    {
        if(digito >= '0' && digito <= '9')
        {
            if(!passoux) num1 += digito;
        } 
        if(digito == 'x') passoux = true;
        if(digito >= '0' && digito <= '9')
        {
            if(passoux) num2 += digito;
        } 
    }
    jogos[i].push_back(stoi(num1));
    jogos[i].push_back(stoi(num2));
}

int main()
{
    int n; cin >> n;
    cin.ignore();
    for( int i = 0 ; i < n ; i++ )
    {
        string t1; getline(cin, t1);
        string t2; getline(cin, t2);
        convert(t1, i);
    }

    return 0;
}