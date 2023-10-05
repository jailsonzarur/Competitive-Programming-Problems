#include <bits/stdc++.h>

using namespace std;

stack<int> dectobin(int num){
    stack<int> result;
    while(num >= 2){
        int resto = num%2;
        int quociente = num/2;
        num = quociente;
        result.push(resto);
    }
    result.push(num);
    return result;
}

int bintodec(stack<int> num){
    float i = num.size()-1;
    int result = 0;
    while(!num.empty()){
        result += num.top() * pow(2.0, i);
        i--;
        num.pop();
    }
    return result;
}

int main(){
    int n1, n2;
    ios::sync_with_stdio(false);
    while(cin >> n1){
        ios::sync_with_stdio(false);
        cin >> n2;
        stack<int> n1pilha = dectobin(n1);
        stack<int> n2pilha = dectobin(n2);
        stack<int> resultado;
        if(n1pilha.size() > n2pilha.size()){
            while(!n2pilha.empty()){
                if(n1pilha.top() == 1 && n2pilha.top() == 1){
                    resultado.push(0);
                }else if(n1pilha.top() == 0 && n2pilha.top() == 0){
                    resultado.push(0);
                }else{
                    resultado.push(1);
                }
                n1pilha.pop();
                n2pilha.pop();
            }
            while(!n1pilha.empty()){
                resultado.push(n1pilha.top());
                n1pilha.pop();
            }
        }else{
            while(!n1pilha.empty()){
                if(n1pilha.top() == 1 && n2pilha.top() == 1){
                    resultado.push(0);
                }else if(n1pilha.top() == 0 && n2pilha.top() == 0){
                    resultado.push(0);
                }else{
                    resultado.push(1);
                }
                n1pilha.pop();
                n2pilha.pop();
            }
            while(!n2pilha.empty()){
                resultado.push(n2pilha.top());
                n2pilha.pop();
            }
        }
        int resultfinal = bintodec(resultado);
        while(!resultado.empty()){
            cout << resultado.top();
            resultado.pop();
        }
        cout << endl;
        cout << resultfinal << endl;
    }
    return 0;
}