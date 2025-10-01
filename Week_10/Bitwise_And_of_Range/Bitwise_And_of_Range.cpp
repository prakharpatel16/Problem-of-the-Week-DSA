#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int m,int n){
        int shift=0;
        while(m<n){
            m>>=1;
            n>>=1;
            shift++;
        }
        return m<<shift;
    }
};
int main(){
    Solution sol;
    int M1=5,N1=7;
    cout<<"Input: M="<<M1<<",N="<<N1<<endl;
    cout<<"Output:"<<sol.rangeBitwiseAnd(M1,N1)<<endl;
    int M2=0,N2=1;
    cout<<"Input:M="<<M2<<",N="<<N2<<endl;
    cout<<"Output:"<<sol.rangeBitwiseAnd(M2,N2)<<endl;
    return 0;
}