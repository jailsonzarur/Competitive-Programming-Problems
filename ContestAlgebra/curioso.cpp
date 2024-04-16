#include <bits/stdc++.h>

using namespace std;

int main()
{
    double i, l; cin >> i >> l;
    int ciclos; cin >> ciclos;
    printf("%.1lf\n", l *(ciclos-1) + i);
    return 0;
}