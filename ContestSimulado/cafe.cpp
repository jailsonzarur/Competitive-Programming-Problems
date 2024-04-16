#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define MAX 1000
#define ll long long
#define lli long long int
 
using namespace std;
 
lli N, K;
 
lli quantDist() 
{
    lli sum = 0;
 
    for (int i = 0; i < N * 2; i++)
    {
        lli temp;
        cin >> temp;
 
        sum += temp;
    }
 
    return sum;
}
 
int main() 
{
    ll sum = 0;
    cin >> N >> K;
    sum = quantDist();
    cout << K/sum << endl;
    return 0;
}