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
 
char sudoku[9][9];
 
bool possivel(int pos1, int pos2, int valor)
{
    for (int i = 0; i < 9; i++)
    {
        if (sudoku[pos1][i] - '0' == valor || sudoku[i][pos2] - '0' == valor) return false;
    }
 
    int linha = pos1 - pos1 % 3, coluna = pos2 - pos2 % 3;
 
    for (int i = linha; i < linha + 3; i++)
    {
        for (int j = coluna; j < coluna + 3; j++)
        {
            if (sudoku[i][j] - '0' == valor) return false;
        }
    }
 
    return true;
}
 
bool solver(int pos1, int pos2)
{
    if (pos2 == 9)
    {
        if (pos1 == 8) return true;
        pos1++;
        pos2 = 0;
    }
    
    if (sudoku[pos1][pos2] != '#') solver(pos1, pos2 + 1);
 
    for (int i = 1; i <= 9; i++)
    {
        if (possivel(pos1, pos2, i))
        {
            sudoku[pos1][pos2] = char(i + '0');
            return solver(pos1, pos2 + 1);
            sudoku[pos1][pos2] = '#';
        }
    }
 
    return false;
}
 
int main()
{
    optimize;
 
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++) cin >> sudoku[i][j];
    }
 
    solver(0, 0);
 
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++) cout << sudoku[i][j] << ' ';
        cout << sudoku[i][8] << endl;
    }
 
    return 0;
}