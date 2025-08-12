#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void dfs(int student,unordered_map<int, vector<int>>& friendship, unordered_set<int>& visited){
    for(int friendId:friendship[student]){
        if(visited.find(friendId)==visited.end()){
            visited.insert(friendId);
            dfs(friendId, friendship, visited);
        }
    }
}

int countFriendGroups(int N, unordered_map<int, vector<int>>& friendship) {
    unordered_set<int> visited;
    int groups = 0;

    for(int student=0;student<N;student++){
        if (visited.find(student) == visited.end()) {
            visited.insert(student);
            dfs(student, friendship, visited);
            groups++;
        }
    }
    return groups;
}

int main() {
    int N = 7;
    unordered_map<int, vector<int>> friendship = {
        {0, {1, 2}},
        {1, {0, 5}},
        {2, {0}},
        {3, {6}},
        {4, {}},
        {5, {1}},
        {6, {3}}
    };

    cout<<countFriendGroups(N,friendship)<<endl;

    return 0;
}