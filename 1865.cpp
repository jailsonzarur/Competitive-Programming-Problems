#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int i;
    cin >> n;
    for( i = 0 ; i < n ; i++ ){
        string temp;
        int N;
        cin >> temp;
        cin >> N;
        if(temp == "Thor") cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}