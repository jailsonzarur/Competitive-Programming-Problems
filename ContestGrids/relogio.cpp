#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 500
#define ll long long
#define lli long long int
using namespace std;
 
int N, vec[MAX], sum;
 
int main() {
  cin >> N;
  int mod = 12;
  int sum = 0;
  for(int i = 0; i < N; i++){
    cin >> vec[i];
    sum += vec[i];
  }
  cout << sum%mod << endl;
  return 0;
}