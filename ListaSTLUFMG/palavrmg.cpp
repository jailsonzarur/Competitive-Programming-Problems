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
        string temp1 = temp;
        for (auto& x : temp) { 
            x = tolower(x); 
        } 
        vector<char> v(temp.length());
        for( int i = 0 ; i < temp.length() ; i++ )
        {
            v[i] = temp[i];
        }

        sort(v.begin(), v.end());

        string temp2 = "";
        for(auto x : v)
        {
            temp2 += x;
        }

        bool isorder = true;
        for( int i = 1 ; i < temp.length(); i++ )
        {
            if(temp[i] == temp[i-1])
            {
                isorder = false;
                break;
            }
        }


        if(temp == temp2 && isorder) cout << temp1 << ": " << "O" << endl;
        else cout << temp1 << ": " << "N" << endl;

    }

    return 0;
}