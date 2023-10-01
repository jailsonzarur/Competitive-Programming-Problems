#include <bits/stdc++.h>

using namespace std;

int brancos, pretos;

void casas(int n){
    pretos = (n * n)/2;

    if(n % 2 == 0) brancos = pretos;
    else brancos = pretos + 1;
}

int main(){
    int n;
    cin >> n;
    casas(n);
    cout << brancos << " casas brancas e " << pretos << " casas pretas" << endl;
}