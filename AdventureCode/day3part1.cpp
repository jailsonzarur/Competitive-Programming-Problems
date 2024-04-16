#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3 + 10;
char matriz[142][142];
string num = "";
long long nump;
long long soma = 0;

int verifica(char digito, int linha, int postemp) {
    int pos = postemp;
    bool possible = false;
    if (digito >= '0' && digito <= '9') {
        while (matriz[linha][postemp] >= '0' && matriz[linha][postemp] <= '9') {
            num += matriz[linha][postemp];
            postemp++;
        }
        for (int i = max(1, linha - 1); i <= min(140, linha + 1); i++) {
            for (int j = max(1, pos - 1); j <= min(140, postemp); j++) {
                if (matriz[i][j] != '.' && matriz[i][j] != '0' && matriz[i][j] != '1' && matriz[i][j] != '2' &&
                    matriz[i][j] != '3' && matriz[i][j] != '4' && matriz[i][j] != '5' && matriz[i][j] != '6' &&
                    matriz[i][j] != '7' && matriz[i][j] != '8' && matriz[i][j] != '9') {
                    possible = true;
                }
            }
        }
        if (possible) {
            nump = stoll(num);
            soma += nump;
        }
        num = "";
    }
    cout << "opa" << endl;
    return postemp;
}

int main() {
    for (int i = 0; i < 142; i++) {
        for (int j = 0; j < 142; j++) {
            matriz[i][j] = '.';
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
    cout << soma << endl;
    return 0;
}
