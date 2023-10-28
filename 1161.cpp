#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n1, n2;
    while(cin >> n1 >> n2){
        long long f1 = 1;
        long long f2 = 1;
        if(n1 == 0){
            f1 = 1;
        }else{
            for( int i = n1 ; i >= 1 ; i-- ){
                f1 *= i;
            }
        }
        if(n2 == 0){
            f2 = 1;
        }else{
            for( int i = n2 ; i >= 1 ; i-- ){
                f2 *= i;
            }
        }
        cout << f1+f2 << endl;
    }
    return 0;
}