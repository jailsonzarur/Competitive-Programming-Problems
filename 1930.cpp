#include <bits/stdc++.h>

using namespace std;

int main(){
    int t[4];
    int result = 0;
    for( int i = 0 ; i < 4 ; i++ ){
        cin >> t[i];
    }
    for( int i = 0 ; i < 3 ; i++ ){
        result += t[i]-1;
    }
    result += t[3];
    cout << result << endl;
    return 0;
}