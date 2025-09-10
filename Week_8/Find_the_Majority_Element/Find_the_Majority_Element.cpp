// Author: Prakhar Patel
// Date: 2025-09-10
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int findMajorityElement(vector<int>& nums) {
    int candidate = 0,count = 0;
    for(int num:nums){
        if(count == 0){
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}
int main() {
    fast;
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<findMajorityElement(nums)<<endl;
    return 0;
}