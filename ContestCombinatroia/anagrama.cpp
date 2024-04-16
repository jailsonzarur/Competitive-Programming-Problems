#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 20000
#define INTMAX 10000000000
#define pii pair<int, int> 
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long
 
using namespace std;
 
int consoante = 0, vogal = 0;
vector<int> alfabeto(26, 0);
string frase;
 
unsigned long long fatorial(unsigned long long x)
{
    if (x > 0) return x * fatorial(x - 1);
    else return 1;
}
 
void alfabetiza()
{
    for (auto letra : frase)
    {
        if (letra >= 'A' && letra <= 'Z')
        {
            alfabeto[letra - 'A']++;
            if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') vogal++;
            else consoante++;
        }
    }
}
 
unsigned long long solution()
{
    unsigned long long sol = fatorial(consoante) * fatorial(vogal);
 
    for (auto qtd : alfabeto)
    {
        if (qtd > 1) sol /= fatorial(qtd);
    }
 
    return sol;
}
 
int main()
{
    optimize;
 
    getline(cin, frase);
 
    alfabetiza();
 
    cout << solution() << endl;
 
    return 0;
}