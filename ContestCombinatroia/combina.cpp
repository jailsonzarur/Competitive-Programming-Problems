#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void comb(vector<string> s1){
  int n = s1.size();
  for(int i = 0; i < n; i++){
  cout << s1[i] << endl;
  }
 
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      cout << s1[i] << ',' << s1[j] << endl;
    }
  }
  for(int i=0; i<n; i++){
    if(i!=n-1) cout << s1[i] << ',';
    else cout << s1[i] << endl;
  }
}
 
int main(){
  string s;
  getline(cin, s);
  vector<string> s1;
  string word;
  int n = s.size();
  int cont = 1;
  for(int i = 0; i < n; i++){
    if(s[i] != ','){
      word += s[i];
    }else{
      cont++;
      s1.push_back(word);
      word = "";
    }
    if(i == n-1){
      s1.push_back(word);
      word = "";
    }
  }
  comb(s1);
  return 0;
}