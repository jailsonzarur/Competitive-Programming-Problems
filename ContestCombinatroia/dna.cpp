#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
bool anagram(string s1, string s2){
  if(s1.length() != s2.length()) return false;
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  return s1 == s2;
}
 
int main(){
  int quant;
  cin >> quant;
  quant = quant*2;
  string word[quant];
  for(int i=0;i<quant;i++){
    cin >> word[i];
  }
  for(int i=0;i<quant;i++){
    if(i%2!=0){
      bool resp = anagram(word[i], word[i-1]);
      if(resp) cout << "sim" << endl;
      else cout << "nao" << endl;
    }else{
      continue;
    }
  }
  return 0;
}