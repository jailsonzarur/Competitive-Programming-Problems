#include <bits/stdc++.h>

using namespace std;

int main(){
    bool A = false;
    bool B = false;
    bool C = false;

    int n, i;
    char copo;
    cin >> n;
    cin >> copo;
    if(copo == 'A') A = true;
    if(copo == 'B') B = true;
    if(copo == 'C') C = true;

    for( i = 0 ; i < n ; i++ ){
        int troca;
        cin >> troca;

        if(troca == 1){
            bool temp;
            temp = A;
            A = B;
            B = temp;
        }
        if(troca == 2){
            bool temp;
            temp = C;
            C = B;
            B = temp;
        }
        if(troca == 3){
            bool temp;
            temp = A;
            A = C;
            C = temp;
        }
    }

    if(A) cout << 'A' << endl;
    if(B) cout << 'B' << endl;
    if(C) cout << 'C' << endl;

    return 0;
}