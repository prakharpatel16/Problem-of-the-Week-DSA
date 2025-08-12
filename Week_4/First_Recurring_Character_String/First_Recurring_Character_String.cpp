// Author: Prakhar Patel
// Date: 2025-08-12
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s;
    if(!getline(cin, s)) return 0;

    array<bool, 256> seen{};

    for(char ch:s){
        unsigned char uc = static_cast<unsigned char>(ch);
        if(seen[uc]){
            cout<<ch<<endl;
            return 0;
        }
        seen[uc] = true;
    }

    cout<<"null"<<endl;
    return 0;
}