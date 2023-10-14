#include <bits/stdc++.h>

using namespace std;

int primos[3502];

bool isPrime(int num){
    int raiz = sqrt(num);
    for( int i = 3 ; i <= raiz ; i+=2 ){
        if(num%i == 0) return false;
    }
    return true;
}

void primeNumbers(){
    int a = 1;
    primos[0] = 2;
    for( int i = 3 ; i < 32650 ; i+=2 ){
        if(isPrime(i)){
            primos[a] = i;
            a++;
        }
    }
}

int flavious(int N){
    int r = 0;
    for( int i = 1 ; i <= N ; ++i ){
        r = (r + primos[N-i]) % i;
    }
    return ++r;
}

int main()
{
    primeNumbers();
    while (true)
    {
        int N;
        cin >> N;
        if(N == 0) break;
        cout << flavious(N) << endl;
        
        
    }

    return 0;
}