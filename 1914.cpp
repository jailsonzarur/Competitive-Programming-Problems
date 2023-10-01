#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    for( i = 0 ; i < n ; i++ ){
        string nome1, escolha1;
        string nome2, escolha2;
        cin >> nome1 >> escolha1 >> nome2 >> escolha2;
        int num1, num2;
        cin >> num1 >> num2;
        int soma = num1 + num2;
        if(soma%2 == 0){
            if(escolha1 == "PAR"){
                cout << nome1 << endl;
            }else{
                cout << nome2 << endl;
            }
        }else{
            if(escolha1 == "IMPAR"){
                cout << nome1 << endl;
            }else{
                cout << nome2 << endl;
            }
        }
    }
    return 0;
}