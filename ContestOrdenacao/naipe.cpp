#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()
using namespace std;
#define MAX 1000
int main() {
  int n, m;
  cin >> n >> m;
  string resp = "";

  if(m == 1){
    resp += "Às ";
  }else if(m == 11){
    resp += "Valete ";
  }else if(m == 12){
    resp += "Dama ";
  }else if(m == 13){
    resp += "Rei ";
  }else{
    resp += to_string(m) + " ";
  }

  if(n == 0){
    resp += "de Paus";
  }else if(n == 1){
    resp += "de Ouro";
  }else if(n == 2){
    resp += "de Coração";
  }else{
    resp += "de Espada";
  }
  cout << resp << endl;

  return 0;
}