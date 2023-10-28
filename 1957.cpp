#include <bits/stdc++.h>

using namespace std;

string converte(int num){
    if(num > 9){
        if(num == 10) return "A";
        if(num == 11) return "B";
        if(num == 12) return "C";
        if(num == 13) return "D";
        if(num == 14) return "E";
        if(num == 15) return "F";
    }else{ 
        return to_string(num);
    }
    return "";
}

int main(){
    int num;
    string result = "";
    cin >> num;

    if(num < 16){
        string temp = converte(num);
        cout << temp << endl;
        return 0;
    }

    while(num >= 16){
        int resto = num % 16;
        num = num / 16;
        if(num < 16){
            string temp = converte(num);
            string tempresto = converte(resto);
            result += tempresto;
            result += temp;
            break;
        }else{
            string temp = converte(resto);
            result += temp;
        }
    }

    char resultemp[result.length()+1];
    strcpy(resultemp, result.c_str());

    for( int i = result.length()-1 ; i >= 1 ; i-- ){
        cout << resultemp[i];
    }
    cout << resultemp[0] << endl;

    return 0;
    
}