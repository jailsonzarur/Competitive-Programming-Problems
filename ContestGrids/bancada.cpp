#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 500
#define ll long long
#define lli long long int
using namespace std;
 
void mmc(int W, int X, int Y, int Z) {
 
    while (cin >> W >> X >> Y >> Z){
        int mmc = 1;
        int i = 2;
        while (W != 1 || X != 1 || Y != 1 || Z != 1) {
            if (W % i == 0 || X % i == 0 || Y % i == 0 || Z % i == 0) {
                mmc *= i;
                if (W % i == 0) W /= i;
                if (X % i == 0) X /= i;
                if (Y % i == 0) Y /= i;
                if (Z % i == 0) Z /= i;
            } else {
                i++;
            }
        }
        cout << mmc << endl;
    }
}
int main() {
    int W, X, Y, Z;
    mmc(W, X, Y, Z);
    return 0;
}