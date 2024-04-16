#include <bits/stdc++.h>

using namespace std;

int pos = 0;
string temp;
int soma = 0;

int maxblue = 0;
int maxred = 0;
int maxgreen = 0;

void numero()
{
    if (temp[pos] >= '0' && temp[pos] <= '9')
    {
        int posteste = pos;
        string num = "";
        while (temp[posteste] != ' ')
        {
            num += temp[posteste];
            posteste++;
        }
        int numtemp = stoi(num);
        int postemp = posteste + 1;
        if (temp[postemp] == 'b')
        {
            if (temp.substr(postemp, 4) == "blue")
            {
                if (numtemp > maxblue)
                    maxblue = numtemp;
            }
        }
        else if (temp[postemp] == 'r')
        {
            if (temp.substr(postemp, 3) == "red")
            {
                if (numtemp > maxred)
                    maxred = numtemp;
            }
        }
        else if (temp[postemp] == 'g')
        {
            if (temp.substr(postemp, 5) == "green")
            {
                if (numtemp > maxgreen)
                    maxgreen = numtemp;
            }
        }
    }
}

int main()
{
    string linha;
    for (int i = 1; i <= 100; i++)
    {
        getline(cin, linha);
        temp = linha.substr(8);
        for (char digito : temp)
        {
            numero();
            pos++;
        }
        soma += maxblue * maxgreen * maxred;
        maxblue = 0;
        maxred = 0;
        maxgreen = 0;

        pos = 0;
    }

    cout << soma << endl;
    return 0;
}