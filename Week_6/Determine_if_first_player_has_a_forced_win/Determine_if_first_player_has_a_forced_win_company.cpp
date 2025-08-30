// Author: Prakhar Patel
// Date: 2025-08-30
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
bool misereNim(vector<int> heaps) {
    int n = heaps.size();
    bool allOnes = true;
    for(int h:heaps){
        if(h!=1){
            allOnes = false;
            break;
        }
    }
    if(allOnes){
        return (n%2==0);
    }
    int xorsum = 0;
    for(int h:heaps){
        xorsum^=h;
    }
    return (xorsum!=0);
}
int main() {
    fast;
    vector<int> heaps(3);
    cout<<"Enter 3 heap sizes: ";
    for(int i=0;i<3;i++) cin>>heaps[i];

    bool result = misereNim(heaps);

    if(result)
        cout<<"True(First player has a forced win)"<<endl;
    else
        cout<<"False(First player will lose under optimal play)"<<endl;
    return 0;
}