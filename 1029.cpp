#include <bits/stdc++.h>

using namespace std;

int cont = -1;

int fib(int num)
{
    cont++;
    if (num == 1)
        return 1;
    if (num == 0)
        return 0;
    return fib(num - 1) + fib(num - 2);
}

int main()
{
    int n;
    cin >> n;
    for ( int i = 0 ; i < n ; i++ )
    {
        int temp;
        cin >> temp;
        int result = fib(temp);
        cout << "fib(" << temp << ") = " << cont << " calls = " << result << endl;
        cont = -1;
    }
    return 0;
}