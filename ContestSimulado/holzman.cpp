#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 1000
 
using namespace std; 
 
vector<string> cods(5);
 
void solution(int linha)
{
    for (int i = 0; i < 7; i++)
    {
        int cont = '0';
 
        for (int j = 0; j < 4; j++)
        {
            if (cods[j][i] == '1') cont == '0'? cont = '1' : cont = '0';
        }
 
        if (cont != cods[4][i])
        {
            cods[linha][i] == '0'? cods[linha][i] = '1' : cods[linha][i] = '0';
            return;
        }
    }
}
 
int main()
{
    optimize;
 
    for (int i = 0; i < 5; i++) cin >> cods[i];
 
    for (int i = 0; i < 4; i++)
    {
        int cont = '0';
 
        for (int j = 0; j < 7; j++)
        {
            if (cods[i][j] == '1') cont == '0'? cont = '1' : cont = '0';
        }
 
        if (cont != cods[i][7]) solution(i);
    }
 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++) cout << cods[i][j];
        cout << endl;
    }
 
    return 0;
}