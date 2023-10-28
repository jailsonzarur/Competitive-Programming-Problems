#include <bits/stdc++.h>

using namespace std;

stack<int> dectobin(int num)
{
    stack<int> result;
    while (num >= 2)
    {
        int resto = num % 2;
        int quociente = num / 2;
        num = quociente;
        result.push(resto);
    }
    result.push(num);
    return result;
}

long long bintodec(stack<int> num)
{
    int i = num.size() - 1;
    long long result = 0;
    while (!num.empty())
    {
        result += num.top() * pow(2, i);
        i--;
        num.pop();
    }
    return result;
}

void mostrar(stack<int> num){
    while(!num.empty()){
        cout << num.top();
        num.pop();
    }
    cout << endl;
}

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        stack<int> n1pilha = dectobin(n1);
        stack<int> n2pilha = dectobin(n2);
        stack<int> resultado;
        if (n1pilha.size() > n2pilha.size())
        {
            while (n1pilha.size() != n2pilha.size())
            {
                n2pilha.push(0);
            }
        }
        if (n2pilha.size() > n1pilha.size())
        {
            while (n2pilha.size() != n1pilha.size())
            {
                n1pilha.push(0);
            }
        }

        mostrar(n1pilha);
        mostrar(n2pilha);

        

        while (!n2pilha.empty())
        {
            if (n1pilha.top() == 1 && n2pilha.top() == 1)
            {
                resultado.push(0);
            }
            else if (n1pilha.top() == 0 && n2pilha.top() == 0)
            {
                resultado.push(0);
            }
            else
            {
                resultado.push(1);
            }
            n1pilha.pop();
            n2pilha.pop();
        }
        mostrar(resultado);
        long long resultfinal = bintodec(resultado);
        cout << resultfinal << endl;
    }
    return 0;
}