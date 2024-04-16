#include <bits/stdc++.h>

using namespace std;

int main()
{
  int u; cin >> u;
  for( int i = 0 ; i < u ; i++ )
  {
    int n; cin >> n;
    char matriz[n][n];
    for( int i = 0 ; i < n ; i++ )
    {
      for( int j = 0 ; j < n ; j++ )
      {
        cin >> matriz[i][j];
      }
    }

    set<string> set1;
    int t = 0;
    for( int i = 0 ; i < n ; i++ )
    {
      string temp = "";
      for( int j = 0 ; j < n ; j++ )
      {
        temp += matriz[i][j];
      }
      set1.insert(temp);
      t++;
    } 

    set<string> set2;
    int m = 0;
    for( int i = 0 ; i < n ; i++ )
    {
      string temp = "";
      for( int j = 0 ; j < n ; j++ )
      {
        temp+= matriz[j][i];
      }
      set2.insert(temp);
      m++;
    }
    if(set1.size() == t && set2.size() == m ) cout << "sim" << endl;
    else cout << "nao" << endl;
  }
  
  
    
    return 0;
}