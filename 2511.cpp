#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, i;
    while(scanf("%d", &n) != EOF){
        int analise[n];
        int primos[n];
        int qtd_primos = 0;
        for( i = 0 ; i < n ; i++ ){
            int num;
            scanf("%d", &num);
            analise[i] = num;
        }

        for(int i = 0; i < n; i++){
            if(analise[i] < 2) {
                continue;
            }
            if(analise[i]%2 == 0){
                if(analise[i] == 2){
                    primos[qtd_primos] = analise[i];
                    qtd_primos++;
                }
                continue;
            }
            if(analise[i]%2 != 0){
                bool prime = true;
                int raiz = sqrt(analise[i]);
                for( int j = 3 ; j <= raiz ; j+=2 ){
                    if(analise[i]%j == 0) {
                        prime = false;
                        break;
                    }
                }
                if(prime){
                    primos[qtd_primos] = analise[i];
                    qtd_primos++;
                    continue;
                }
            }
        }

        if(qtd_primos == 0){
            printf("*\n");
            continue;
        }

        for(int i = 0; i < qtd_primos - 1; i++){
            printf("%d ", primos[i]);
        }
        printf("%d\n", primos[qtd_primos - 1]);
    }
    return 0;
}