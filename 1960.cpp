#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string romano = "";
    cin >> n;

    int C = n / 100;
    if (C == 9)
    {
        romano += "CM";
    }
    else if (C == 4)
    {
        romano += "CD";
    }
    else
    {
        if(C < 5){
            for( int i = 0 ; i < C ; i++ ){
                romano += "C";
            }
        }else if(C >= 5){
            romano += "D";
            for( int i = 5 ; i < C ; i++ ){
                romano += "C";
            }
        }
    }

    n = n - C*100;

    int X = n / 10;
    if (X == 9)
    {
        romano += "XC";
    }
    else if (X == 4)
    {
        romano += "XL";
    }
    else
    {
        if(X < 5){
            for( int i = 0 ; i < X ; i++ ){
                romano += "X";
            }
        }else if(X >= 5){
            romano += "L";
            for( int i = 5 ; i < X ; i++ ){
                romano += "X";
            }
        }
    }

    n = n - X*10;

    int I = n;
    if (I == 9)
    {
        romano += "IX";
    }
    else if (I == 4)
    {
        romano += "IV";
    }
    else
    {
        if(I < 5){
            for( int i = 0 ; i < I ; i++ ){
                romano += "I";
            }
        }else if(I >= 5){
            romano += "V";
            for( int i = 5 ; i < I ; i++ ){
                romano += "I";
            }
        }
    }

    cout << romano << endl;

    return 0;

}