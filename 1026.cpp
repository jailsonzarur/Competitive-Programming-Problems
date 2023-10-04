#include <bits/stdc++.h>

using namespace std;

stack<int> dectobin(int num){
    stack<int> result;
    while(num >= 2){
        int resto = num%2;
        int quociente = num/2;
        num = quociente;
        result.push(resto);
        result.push(quociente);
    }
    result.push(num);
    return result;
}

int bintodec(stack<int> num){
    int i = num.size();
    int result = 0;
    while(!num.empty()){
        result += num.top() * pow(2, i);
        i--;
        num.pop();
    }
    return result;
}

int main(){
    int n1, n2;
    while(cin >> n1 >> n2){
        stack<int> n1pilha = dectobin(n1);
        stack<int> n2pilha = dectobin(n2);
        stack<int> resultado;
    }
}