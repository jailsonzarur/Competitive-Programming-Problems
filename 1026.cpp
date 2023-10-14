#include <bits/stdc++.h>

using namespace std;

stack<long long> dectobin(long long num)
{
    stack<long long> result;
    while (num >= 2)
    {
        long long resto = num % 2;
        long long quociente = num / 2;
        num = quociente;
        result.push(resto);
    }
    result.push(num);
    return result;
}

long long bintodec(queue<long long> num)
{
    long long i = num.size() - 1;
    long long result = 0;
    while (!num.empty())
    {
        result += num.front() * pow(2, i);
        i--;
        num.pop();
    }
    return result;
}

int main()
{
    long long n1, n2;
    while (cin >> n1 >> n2)
    {
        stack<long long> n1pilha = dectobin(n1);
        stack<long long> n2pilha = dectobin(n2);
        queue<long long> resultado;
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
        
        long long resultfinal = bintodec(resultado);
        cout << resultfinal << endl;
    }
    return 0;
}