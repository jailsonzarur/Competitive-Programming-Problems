#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()
using namespace std;
#define MAX 1000

// float minpkm(int min, int seg){
//   float t, rit;
//   min = min * 60;
//   t = min + seg;
//   rit = t/(10 * 60);
//   return rit;
// }

// float pVU(int min, int seg){
//   float t, temp;
//   min = min * 60;
  
//   t = min + seg;
//   temp = t*21/(10*60);
//   return temp;
// }

int main() {
  int m, s;
  cin >> m >> s;
  float ritmo, martn;
  float t = s + (m*60);

  ritmo = t/(10*60);
  martn = t*21/(10*60);
  // ritmo = minpkm(m, s);
  // martn = pVU(m, s);
  printf("%.1f\n", ritmo);
  printf("%.1f\n", martn);

  return 0;
}