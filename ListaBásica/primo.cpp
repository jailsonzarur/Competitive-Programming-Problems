#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long n; cin >> n;
    long long limit = sqrt(n);
    bool primo = true;
    for( long long i = 2 ; i <= limit ; i++ )
    {
        if(n % i == 0) primo = false;
    }

    if(primo) cout << "sim" << endl;
    else cout << "nao" << endl;

    return 0;

}