// Author: Prakhar Patel
// Date: 2025-08-03
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


bool canPartition(const vector<int>& nums){
    int sum = 0;
    for(int num:nums) sum += num;

    if(sum % 2!=0) return false;

    int target = sum / 2;
    vector<bool> dp(target+1,false);
    dp[0] = true;

    for(int num:nums){
        for(int j=target;j>=num;--j) {
            dp[j] = dp[j] || dp[j-num];
        }
    }

    return dp[target];
}

int main() {
    fast;
    vector<vector<int>> testCases = {
        {15, 5, 20, 10, 35, 15, 10},  
        {15, 5, 20, 10, 35}
    };

    for(const auto& arr : testCases){
        cout<<(canPartition(arr) ? "true":"false")<<endl;
    }

    return 0;
}