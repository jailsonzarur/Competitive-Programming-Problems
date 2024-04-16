#include <bits/stdc++.h>

using namespace std;

string txt;
string num = "";
bool primeiro, segundo;
int pos = 0;

void verifica(char digito)
{
    if (primeiro && segundo)
    {
        num[1] = digito;
    }
    else
    {
        if (primeiro)
        {
            segundo = true;
            num += digito;
        }
        else
        {
            num += digito;
            primeiro = true;
        }
    }
}

void numero()
{
    if (txt[pos] >= '0' && txt[pos] <= '9')
    {
        verifica(txt[pos]);
        return;
    }
    if (txt[pos] == 'o')
    {
        if (txt.substr(pos, 3) == "one")
            verifica('1');
    }
    else if (txt[pos] == 't')
    {
        if (txt.substr(pos, 3) == "two")
            verifica('2');
        if (txt.substr(pos, 4) == "three")
            verifica('3');
    }
    else if (txt[pos] == 'f')
    {
        if (txt.substr(pos, 4) == "four")
            verifica('4');
        if (txt.substr(pos, 4) == "five")
            verifica('5');
    }
    else if (txt[pos] == 's')
    {
        if (txt.substr(pos, 3) == "six")
            verifica('6');
        if (txt.substr(pos, 5) == "seven")
            verifica('7');
    }
    else if (txt[pos] == 'e')
    {
        if (txt.substr(pos, 5) == "eight")
            verifica('8');
    }
    else if (txt[pos] == 'n')
    {
        if (txt.substr(pos, 4) == "nine")
            verifica('9');
    }
}

int main()
{
    long long soma = 0;
    for ( int i = 0 ; i < 1000 ; i++ )
    {
        cin >> txt;
        for (char digito : txt)
        {
            numero();
            pos++;
        }

        
        cout << num << endl;
        soma += stoll(num);
        pos = 0;
        num = "";
        primeiro = false;
        segundo = false;
    }
    
   cout << soma << endl;
   return 0;
}