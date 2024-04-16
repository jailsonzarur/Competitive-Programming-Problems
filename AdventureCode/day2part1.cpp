#include <bits/stdc++.h>

using namespace std;

int pos = 0;
string temp;
bool possible = true;
int soma = 0;


void numero(){
    if(temp[pos] >= '0' && temp[pos] <= '9') {
        int posteste = pos;
        string num = "";
        while(temp[posteste] != ' '){
            num += temp[posteste];
            posteste++;
        }
        int numtemp = stoi(num);
        int postemp = posteste + 1;
        if(temp[postemp] == 'b'){
            if(temp.substr(postemp, 4) == "blue"){
                if(numtemp > 14) possible = false;
            }
        }else if(temp[postemp] == 'r'){
            if(temp.substr(postemp, 3) == "red"){
                if(numtemp > 12) possible = false;
            }
        }else if (temp[postemp] == 'g')
        {
             if(temp.substr(postemp, 5) == "green"){
                if(numtemp > 13) possible = false;
            }
        }
        
    }
}

int main() {
    string linha;
    for( int i = 1 ; i <= 100 ; i++ ) {
        getline(cin, linha);
        temp = linha.substr(8);
        for(char digito : temp){
            numero();
            pos++;
        }
        if(possible) soma += i;
        else possible = true;

        pos = 0;
    }

    cout << soma << endl;
    return 0;
}