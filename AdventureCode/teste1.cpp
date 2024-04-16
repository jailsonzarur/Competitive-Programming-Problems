#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+10;

int main() {
    vector<vector<long long>> g(MAX);
    g[MAX-1].push_back(1000);
    cout << g[MAX-1][0] << endl;
}