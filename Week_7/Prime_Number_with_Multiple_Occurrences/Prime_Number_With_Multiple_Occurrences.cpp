// Author: Prakhar Patel
// Date: 2025-08-31
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN = 1000000;
vector<bool> sievePrime(MAXN+1,true);

void buildSieve(){
    sievePrime[0] = sievePrime[1] = false;
    for(int i=2;i*i<=MAXN;i++){
        if(sievePrime[i]){
            for(int j=i*i;j<=MAXN;j+=i){
                sievePrime[j] = false;
            }
        }
    }
}

bool isPrime(int num){
    if(num<=1) return false;
    return sievePrime[num];
}

vector<int> findPrimeDuplicates(vector<int>& arr){
    unordered_map<int,int> freq;
    vector<int> order;
    for(int num:arr){
        if(isPrime(num)){
            if(freq[num]==0) order.push_back(num); 
            freq[num]++;
        }
    }

    vector<int> result;
    for(int num:order){
        if(freq[num]>1) result.push_back(num);
    }

    return result;
}
int main() {
    fast;
    buildSieve();

    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin>>A[i];

    vector<int> result = findPrimeDuplicates(A);

    if(result.empty()){
        cout<<-1<<endl;
    }
    else{
        for(int x:result) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}