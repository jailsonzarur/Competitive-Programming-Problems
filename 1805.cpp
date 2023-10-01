#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a1, aN;
    long long n;
    cin >> a1 >> aN;
    n = aN - a1 + 1;
    long long soma = ((a1 + aN)*n)/2;
    cout << soma << endl;
    return 0;
}