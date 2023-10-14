#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    int xadrez[8][8];
    for( int i = 0 ; i < 8 ; i++ ){
        for( int j = 0 ; j < 8 ; j++ ){
            xadrez[i][j] = 0;
        }
    }
    while(true){
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;

        if(x1 == x2  && y1 == y2){
            cout << 0 << endl;
            continue;
        } 

        if(x2 == y2){
            cout << 1 << endl;
            continue;
        } 

        if(x1 == x2){
            cout << 1 << endl;
            continue;
        }

        if(y1 == y2){
            cout << 1 << endl;
            continue;
        }

        int temp1;
        if(x1 >= x2) temp1 = x1-x2;
        else temp1 = x2-x1;

        int temp2;
        if(y1 >= y2) temp2 = y1-y2;
        else temp2 = y2-y1;

        if(temp1 == temp2){
            cout << 1 << endl;
            continue;
        }

        cout << 2 << endl;

    }
}