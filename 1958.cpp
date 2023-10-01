#include <bits/stdc++.h>

using namespace std;

void printDouble(double d) {

unsigned long long int i = *(unsigned long long int *)&d;

for (int j = 63; j >= 0; j--) {
    std::cout << ((i >> j) & 1);

    if (j == 63) std::cout << " ";
    else if (j == 52) std::cout << " ";
}
}

int main(){
    double n;
    cin >> n;
    printDouble(n);
    return 0;
}