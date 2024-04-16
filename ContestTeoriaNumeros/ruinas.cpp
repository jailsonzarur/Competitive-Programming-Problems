#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
  int a, b, m;
  while(true){
    cin >> a >> b >> m;
    if(a == 0 && b == 0 && m == 0) break;
    int opS = (a + b) % m;
    int opSub = (a - b) % m;
    int opM = (a * b) % m;
    cout << a << " + " << b << " mod " << m << " = " << opS << endl;
    cout << a << " - " << b << " mod " << m << " = " << opSub << endl;
    cout << a << " * " << b << " mod " << m << " = " << opM << endl;
  }
 
  return 0;
}