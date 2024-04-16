#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3 + 10;
char matriz[142][142];
string num = "";
long long nump;
long long soma = 0;

long long matriz2[142][142];
long long matriz3[142][142];

int verifica(char digito, int linha, int postemp) {
    int pos = postemp;
    if (digito >= '0' && digito <= '9') {
        while (matriz[linha][postemp] >= '0' && matriz[linha][postemp] <= '9') {
            num += matriz[linha][postemp];
            postemp++;
        }
        for (int i = max(1, linha - 1); i <= min(140, linha + 1); i++) {
            for (int j = max(1, pos - 1); j <= min(140, postemp); j++) {
                if (matriz[i][j] == '*') {
                    long long temp = stoll(num);
                    cout << temp << endl;
                    matriz2[i][j] *= temp;
                    matriz3[i][j]++;
                }
            }
        }
        
        /*for (int i = max(1, linha - 1); i <= min(140, linha + 1); i++) {
            for (int j = max(1, pos - 1); j <= min(140, postemp); j++) {
                if(lista[i][j].size() == 2){
                    long long temp2 = lista[i][j][0] * lista[i][j][1];
                }
            }
        }*/

        num = "";
    }
    cout << "opa" << endl;
    return postemp;
}

int main() {
    for (int i = 0; i < 142; i++) {
        for (int j = 0; j < 142; j++) {
            matriz[i][j] = '.';
            matriz2[i][j] = 1;
            matriz3[i][j] = 0;
        }
    }

    for (int i = 1; i <= 140; i++) {
        for (int j = 1; j <= 140; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 1; i <= 140; i++) {
        for (int j = 1; j <= 140; j++) {
            j = verifica(matriz[i][j], i, j);
        }
    }

    for (int i = 1; i <= 140; i++) {
        for (int j = 1; j <= 140; j++) {
            if(matriz3[i][j] == 2) soma += matriz2[i][j];
        }
    }

    cout << soma << endl;
    return 0;
}
