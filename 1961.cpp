#include <bits/stdc++.h>

using namespace std;

int main(){
    int altura, n;
    cin >> altura >> n;
    int canos[n];

    for( int i = 0 ; i < n ; i++ )
    {  
        cin >> canos[i];
    }

    for( int i = 1 ; i < n ; i++ )
    {
        int temp = canos[i] - canos[i-1];
        if(temp < 0) temp *= -1;
        if(temp > altura){
            cout << "GAME OVER" << endl;
            return 0;
        }
    }

    cout << "YOU WIN" << endl;
    return 0;
}