// Author: Prakhar Patel
// Date: 2025-09-22
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int swapBits(int n){
    return ((n & 0xAA)>>1) | ((n&0x55)<<1);
}
int main() {
    fast;
    int n;
    cin>>n;
    cout<<swapBits(n)<<endl;
    return 0;
}