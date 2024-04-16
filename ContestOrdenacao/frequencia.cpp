#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end()

using namespace std;

const int MAX = 1e6+10;
vector<vector<int>> frequencia(MAX);

int main()
{
    int n; cin >> n;
    set<int> setnum;
    vector<int> g;
    for( int i = 0 ; i < n ; i++ )
    {
        int num; cin >> num;
        setnum.insert(num);
        g.push_back(num);
    }

    int maior = 0;
    for(int i : setnum)
    {
        int freq = 0;
        for(int j : g)
        {
            if(i == j)
            {
                freq++;
            }
        }
        if(freq > maior)
        {
            maior = freq;
        }
        frequencia[freq].push_back(i);
    }

    if(frequencia[maior].size() > 1) 
    {
        sort(ALL(frequencia[maior]));
        cout << frequencia[maior][frequencia[maior].size()-1] << " " << maior << endl;
    } 
    else
    {
        cout << frequencia[maior][0] <<  " " << maior << endl;
    }
    return 0;
}