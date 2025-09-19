// Author: Prakhar Patel
// Date: 2025-09-19
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

vector<vector<int>> adj; 
int removableEdges=0;
int dfs(int node,int parent){
    int subtreeSize=1;

    for(int child:adj[node]){
        if(child!=parent){
            int childSize = dfs(child, node);

            if(childSize%2==0){
                removableEdges++;
            }
            else{
                subtreeSize+=childSize;
            }
        }
    }
    return subtreeSize;
}
int main(){
    fast;
    int n;
    cin>>n;

    adj.resize(n+1);

    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1);
    cout<<removableEdges<<endl;
    return 0;
}