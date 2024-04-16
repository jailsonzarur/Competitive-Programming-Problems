#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()
using namespace std;
#define MAX 1000

int viagem(int total, int tem, int ganho){
  int x = 1;
  total = total - tem;
  while(total > 0){
    total = total - (tem + ganho);
    x++;
    tem = tem + ganho;
  }
  return x;
}

int main() {
  int n, t, i, a;
  cin >> n;
  int dias[n];
  for(int j = 0; j < n; j++){
    cin >> t >> i >> a;
    dias[j] = viagem(t,i,a);
  }

  for(int i=0; i<n; i++){
    cout << dias[i] << endl;
  }

  return 0;
}