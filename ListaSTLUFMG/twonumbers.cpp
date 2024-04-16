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
    
    int a; cin >> a;
    set<int> A;
    for( int i = 0 ; i < a ; i++ )
    {
        int temp; cin >> temp;
        A.insert(temp);
    }
    
    int b; cin >> b;
    set<int> B;
    for( int i = 0 ; i < b ; i++ ) 
    {
        int temp; cin >> temp;
        B.insert(temp);
    }

    for(int i : A)
    {
        for(int j : B)
        {
            if(!A.count(i+j) && !B.count(i+j))
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}