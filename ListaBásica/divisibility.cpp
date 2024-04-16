#include <bits/stdc++.h>

using namespace std;
 
long long ops(long long a, long long b) {
    if(a%b == 0) return 0;
    if(a < b) return b-a;

    long long i = 1;
    long long temp = b * (a/b) + b;

    

    return temp - a;
}

int main() {
    int n; cin >> n;

    for( int i = 0 ; i < n ; i++ )
    {
        long long a, b; cin >> a >> b;
        cout << ops(a, b) << endl;
    }
    return 0;
}