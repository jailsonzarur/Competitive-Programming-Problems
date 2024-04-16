#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
  int n, k, d;
  cin >> n >> k >> d;

  long long resultado = 1;

  for(  ; k > 0 ; k-- )
  {
    resultado *= (resultado * n)
  }
  
 
  return 0;
}