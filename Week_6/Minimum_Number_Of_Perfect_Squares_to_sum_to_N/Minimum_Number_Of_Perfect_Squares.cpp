#include <bits/stdc++.h>
using namespace std;

int numSquaresDP(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    vector<int> sq;
    for(int k=1;k*k<=n;++k) sq.push_back(k * k);

    for(int x=1;x<=n;++x){
        for(int s:sq){
            if(s>x) break;
            dp[x] = min(dp[x],dp[x-s]+1);
        }
    }
    return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin>>n)) return 0;

    cout<<numSquaresDP(n)<<endl;
    return 0;
}