#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int vezes;
    cin >> vezes;

    for( int j = 0 ; j < vezes ; j++ )
    {
        int n, k;
        cin >> n >> k;
        bool pessoas[n];

        for( int i = 0 ; i < n ; i++ ){
            pessoas[i] = true;
        }

        int mortos = 0;
        int cont = k;
        int ponto = k - 1; 
        if(k > n){
            ponto = k%n - 1;
        }
        while (mortos < n-1)
        {
            while (cont < k)
            {
                int next = ponto + 1;
                if (next == n) next = 0;
                if (pessoas[next]) cont++;
                ponto++;
                if (ponto >= n) ponto = 0;
            }
            pessoas[ponto] = false;
            cont = 0;
            mortos++;
        }

        for (int i = 0; i < n; i++)
        {
            if (pessoas[i]){
                cout << "Case " << j+1 << ": " << i+1 << endl;
                break;
            }
        }

    }

    return 0;
}