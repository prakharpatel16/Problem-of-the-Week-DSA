#include <bits/stdc++.h>
using namespace std;

  int subarraySum(vector<int>& nums, int k) {
      unordered_map<int, int> mpp;
      int presum = 0, count = 0;
      int n = nums.size();
      mpp[0] = 1;

      for (int i = 0; i < n; i++) {
          presum += nums[i];
          int remove = presum - k;
          count += mpp[remove];
          mpp[presum] += 1;
        }
      return count;
    }

int main() {
    int n, k;
    cin>>n;

    vector<int> nums(n);
    for (int i=0;i<n;++i) {
        cin>>nums[i];
    }
    cin>>k;

    int Subarray_sum = subarraySum(nums, k);
    cout<<Subarray_sum<<endl;


  return 0;
}