#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    for( i = 0 ; i < n ; i++ ){
        int a;
        cin >> a;
        if(a%2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}