#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    for( i = 0 ; i < n ; i++ ){
        int num;
        cin >> num;
        if(num == 1 || num == 2){
            cout << "Prime" << endl;
            continue;
        }
        if(num%2 == 0){
            cout << "Not Prime" << endl;
        }else{
            bool temp = true;
            for( int j = 3 ; j < sqrt(num) ; j+=2 ){
                if(num%j == 0){
                    cout << "Not Prime" << endl;
                    temp = false;
                    break;
                }
            }
            if(temp) cout << "Prime" << endl;          
        }
    }
    return 0;
}