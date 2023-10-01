#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()

using namespace std;

int main(){
    int vet[2001];
    int n, i;
    cin >> n;

    for( i = 0 ; i < n ; i++ ){
        int temp;
        cin >> temp;

        if(vet[temp] == '\0') vet[temp] = 1;
        else vet[temp]++;
    }

    for( i = 0 ; i < 2001 ; i++ ){
        if(vet[i] != '\0') cout << i << " aparece " << vet[i] << " vez(es)" << endl; 
    }

    return 0;
}