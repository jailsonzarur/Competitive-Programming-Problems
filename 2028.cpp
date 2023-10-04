#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int contador = 0;
    while (cin >> n)
    {
        contador++;
        string result = "";
        int aN2 = 1 + (n - 1) * 1;
        int sN2 = ((1 + aN2) * n) / 2;
        int qtdnum = 1 + sN2;
        if (qtdnum == 1)
        {
            result += "0";
            cout << "Caso " << contador << ": "  << qtdnum << " numero" << endl;
            cout << result << endl << endl;
            continue;
        }
        if (qtdnum == 2)
        {
            result += "0 1";
            cout << "Caso " << contador << ": "  << qtdnum << " numeros" << endl;
            cout << result << endl << endl;
            continue;
        }
        if (qtdnum > 2)
            result += "0 1";
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                result += " " + to_string(i);
            }
        }

        cout << "Caso " << contador << ": "  << qtdnum << " numeros" << endl; 
        cout << result << endl << endl;
    }

    return 0;
}