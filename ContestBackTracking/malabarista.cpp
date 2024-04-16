#include <bits/stdc++.h>

using namespace std;

int maior = 0;
int maior2;

int mmc(vector<int> p)
{
    bool flag = true;
    while(flag)
    {
        for(auto i : p)
        {
            if(maior % i == 0)
            {
                flag = false;
            }
            else
            {
                flag = true;
                break;
            } 
        }
        if(flag) maior += maior2;
    }
    return maior;
}

int main()
{
    vector<int> nums;
    for( int i = 0 ; i < 3 ; i++ )
    {
        int temp; cin >> temp;
        nums.push_back(temp);
        if(temp > maior){
            maior = temp;
            maior2 = temp;
        } 
    }
    cout << mmc(nums) << endl;
    return 0;
}