#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 500
#define ll long long
#define lli long long int
using namespace std;
 
lli N, square;
 
void ehSquare(lli N){
  square = sqrt(N);
  if(square*square == N) {
    cout << "Quadrado perfeito" << endl;
  } else {
    cout << "Nao eh quadrado perfeito" << endl;
  }
}
 
int main() {
  cin >> N;
  ehSquare(N);
  cout << pow(square,2) << endl;
  cout << square << endl;
  return 0;
}