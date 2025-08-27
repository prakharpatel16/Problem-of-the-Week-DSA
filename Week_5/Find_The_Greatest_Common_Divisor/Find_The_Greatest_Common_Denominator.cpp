#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    while(b!=0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long findGCD(vector<long long>& arr,int n){
    long long result = arr[0];
    for(int i=1;i<n;i++){
        result = gcd(result,arr[i]);
        if(result==1) return 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<long long> arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<findGCD(arr,n)<<endl;

    return 0;
}