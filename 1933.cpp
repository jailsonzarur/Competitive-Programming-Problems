#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end();

using namespace std;

int main(){
    vector<int> c;
    for( int i = 0 ; i < 2 ; i++ ){
        int x;
        cin >> x;
        c.push_back(x);
    }
    sort(c.begin(), c.end());
    cout << c[1] << endl;
    return 0;
}