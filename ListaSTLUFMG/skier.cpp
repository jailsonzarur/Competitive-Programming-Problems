#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl /*Útil para debugar, printa o nome da variavel e seu valor*/
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() { _
    
    int n; cin >> n;
    while(n--)
    {
        string temp; cin >> temp;
        int x = 0, y = 0;
        set<pair<pair<int, int>, pair<int, int>>> s;
        int movs = 0;
        for(char digito : temp)
        {
            pair<int ,int> temp1 = {x, y};
            if(digito == 'N') x++;
            if(digito == 'S') x--;
            if(digito == 'W') y--;
            if(digito == 'E') y++;
            
            pair<int ,int> temp2 = {x, y};

            if(s.count({temp1, temp2}) || s.count({temp2, temp1}))
            {
                movs++;
            }
            else
            {
                s.insert({temp1, temp2});
                movs += 5;
            }
            

        }
        cout << movs << endl;
    }

    return 0;
}