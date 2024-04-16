#include <bits/stdc++.h>

using namespace std;

string convert(string msg)
{
    int pos = 0;
    for(char digito : msg)
    {
        if(digito == 'a') msg[pos] = '@';
        if(digito == 'e') msg[pos] = '&';
        if(digito == 'i') msg[pos] = '!';
        if(digito == 'o') msg[pos] = '*';
        if(digito == 'u') msg[pos] = '%';
        pos++;
    }
    return msg;
}

int main() 
{
    int n; cin >> n;
    cin.ignore();
    for( int i = 0 ; i < n ; i++ )
    {
        string temp;
        getline(cin, temp);
        cout << convert(temp) << endl;
    }
    return 0;
}