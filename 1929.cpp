#include <bits/stdc++.h>
#define ALL(x) x.begin(), x.end();

using namespace std;

int main(){
    vector<int> nums;
    for( int i = 0 ; i < 4 ; i++ ){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    if(nums[1] + nums[2] > nums[3] || nums[0] + nums[1] > nums[2]) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}