// Author: Prakhar Patel
// Date: 2025-08-12
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int divideByTwo(int num){
    int count = 0;
    int sum = 0;
    while(sum+2<=num){
        sum += 2;
        count++;
    }
    return count;
}

bool binarySearchCustom(const vector<int>& arr, int x) {
    int low = 0, high = arr.size()-1;

    while(low<=high){
        int diff = high - low;
        int half = divideByTwo(diff);
        int mid = low + half;

        if(arr[mid]==x) return true;
        else if(arr[mid]<x) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main() {
    fast;
    int N, x;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++) cin>>arr[i];
    cin>>x;

    cout<<(binarySearchCustom(arr,x)?"true":"false");
    
    return 0;
}