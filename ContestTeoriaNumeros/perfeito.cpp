#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int aux = 0;
    vector<int> lista;
    string opa = "";
    for( int i = 1 ; i < n ; i++)
    {
        if(n%i == 0)
        {
            aux += i;       
        } 
    }

    if(aux == n)
    {
        cout << "sim" << endl;
        for(int l = 1 ; l < n ; l++)
        {
            int temp = 0;
           for(int i = 1 ; i < l ; i++)
           {
            if(l%i == 0) temp += i;
           }
           if(l == temp){
             opa += to_string(l);  
             opa += " ";
           }
        }
        if(opa.size() > 0) {
            opa += to_string(n);
            cout << opa << endl;
        }
        
    }
    else 
    {
        cout << "nao" << endl;
    }
    return 0;
}


