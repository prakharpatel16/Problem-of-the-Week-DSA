#include<bits/stdc++.h>
using namespace std;

int smallestNonRepresentableSum(const vector<int> &arr) {
    long long result = 1;
    for(int coin:arr) {
        if(coin>result) 
        break;
        result += coin;
    }
    return result;
}

int main() {
    vector<int> arr;
    int x;
    while(cin>>x) {
        arr.push_back(x);
    }
    cout<<smallestNonRepresentableSum(arr)<<endl;
    return 0;
}