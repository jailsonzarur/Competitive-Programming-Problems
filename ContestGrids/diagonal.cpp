#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 500
#define ll long long
#define lli long long int
using namespace std;
 
int sum = 0, N;
 
void preencheMatriz(int N){
  int matriz[MAX][MAX];
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> matriz[i][j];
      if(i == j) sum += matriz[i][j];
      if(i == N-j-1){
        sum -= matriz[i][j];
      }
    }
  }
 
}
 
int main() {
  cin >> N;
  preencheMatriz(N);
  cout << abs(sum) << endl;
  return 0;
}