#include <bits/stdc++.h>

using namespace std;

queue<int> num;
queue<int> numfinal;

void chartonum(string linha) {
    int n = linha.length();
    char char_array[n + 1];
    strcpy(char_array, linha.c_str());
    for( int i = 0 ; i < n ; i++ ) {
        int j = char_array[i];
        if(j >= 48 && j <= 57){
            int temp = j - 48;
            num.push(temp);
        }
    }
}

int numtochar(){
    int nump = 0;
    nump += numfinal.front() * 10;
    numfinal.pop();
    nump += numfinal.front();
    numfinal.pop();
    return nump;
}

int main() {
    int result;
    int soma = 0;
    string linha;
    while(cin >> linha) {
        chartonum(linha);
        numfinal.push(num.front());
        while(!num.empty()){
            if(num.size() == 1) numfinal.push(num.front());
            num.pop();
        }
        result = numtochar();
        soma += result;
    }
    cout << soma << endl;
}