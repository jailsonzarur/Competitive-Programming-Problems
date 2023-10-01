#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i;
    queue<string> vai;
    queue<string> volta;
    int casa = 0; 
    int casatemp = 0;
    int esc = 0;
    int esctemp = 0;
    for( i = 0 ; i < n ; i++ ){
        string temp1;
        string temp2;
        cin >> temp1;
        cin >> temp2;
        vai.push(temp1);
        volta.push(temp2);
    }

    while(!vai.empty() && !volta.empty()){
        if(vai.front() == "chuva"){
            if(casatemp == 0){
                casa++;
                esctemp++;
            }else{
                casatemp--;
                esctemp++;
            }
        }
        if(volta.front() == "chuva"){
            if(esctemp == 0){
                esc++;
                casatemp++;
            }else{
                esctemp--;
                casatemp++;
            }
        }
        cout << vai.front() << endl;
        cout << volta.front() << endl;
        vai.pop();
        volta.pop();
    }
    cout << casa << " " << esc << endl;
    return 0;
}