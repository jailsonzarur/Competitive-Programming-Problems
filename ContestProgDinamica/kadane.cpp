#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

vector<int> numeros;

long long kadane() {
    int max_sum = numeros[0];
    int current_sum = numeros[0];
    int pos = 0;

    for( int i : numeros )
    {
        if(pos != 0)
        {
            current_sum = max(current_sum+i, i);
            max_sum = max(max_sum, current_sum);
        }
        pos++;
    }

    return max_sum;

}

int main() {
    int temp;
    while(cin >> temp){
        numeros.push_back(temp);
    }

    cout << kadane() << endl;
    return 0;

}