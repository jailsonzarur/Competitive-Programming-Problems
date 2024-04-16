#include <bits/stdc++.h>

using namespace std;

string temp;
string num = "";

vector<int> vetor1;
vector<int> vetor2;
bool chave = false;

vector<int> temporario;
vector<long long> fixo(213, 1);

int verifica(int pos) {
    int ver = temp[pos];
    if(ver == 124){
        chave = true;
    }
    if(temp[pos] >= '0' && temp[pos] <= '9'){
        while(temp[pos] >= '0' && temp[pos] <= '9') {
            num += temp[pos];
            pos++;
        }
        int nump = stoi(num);
        
        if(!chave){
            vetor1.push_back(nump);
        }else {
            vetor2.push_back(nump);
        }
    }
    num = "";
    return pos;
}

int main() {
    string linha;
    long long soma = 0;
    for( int i = 1 ; i <= 213 ; i++ ) {
        getline(cin, linha);
        temp = linha.substr(9);
        for( int j = 0 ; j < temp.length() ; j++ ){
            j = verifica(j);
        }

        int pontos = 0;
        for(int a : vetor1){
            for(int b : vetor2) {
                if(a == b){
                    pontos++;
                }
            }
        }
        temporario.push_back(pontos);
        
        vetor1.clear();
        vetor2.clear();
        chave = false;
    }

    for( int i = 0 ; i < temporario.size() ; i++ ) {
        int temp1 = fixo[i];
        while(temp1--) {
            for( int j = i+1 ; j <= i+temporario[i] ; j++ ) {
                fixo[j]++;
            }
        }
    }


    for(auto w : fixo) soma += w;

    cout << soma << endl;
    
    return 0;
}