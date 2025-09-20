// Author: Prakhar Patel
// Date: 2025-09-20
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

struct TrieNode{
    bool isEnd;
    unordered_map<char, TrieNode*> children;
    TrieNode(): isEnd(false) {}
};

class Trie{
    TrieNode* root;

    void dfs(TrieNode* node, string &prefix, vector<string> &results) {
        if(!node) return;
        if(node->isEnd) results.push_back(prefix);
        for(auto &p : node->children){
            char c = p.first;
            TrieNode* child = p.second;
            if(!child) continue;
            prefix.push_back(c);
            dfs(child, prefix, results);
            prefix.pop_back();
        }
    }
    void clear(TrieNode* node) {
        if(!node) return;
        for(auto &p : node->children) clear(p.second);
        delete node;
    }
public:
    Trie(): root(new TrieNode()) {}
    ~Trie() { clear(root); }

    void insert(const string &word){
        TrieNode* cur = root;
        for(char ch:word){
            auto it = cur->children.find(ch);
            if(it == cur->children.end() || it->second == nullptr) {
                cur->children[ch] = new TrieNode();
            }
            cur = cur->children[ch];
        }
        cur->isEnd = true;
    }
    vector<string> autocomplete(const string &prefix) {
        TrieNode* cur = root;
        for(char ch: prefix){
            auto it = cur->children.find(ch);
            if (it == cur->children.end() || it->second == nullptr) return {};
            cur = it->second;
        }
        vector<string> results;
        string curPrefix = prefix;
        dfs(cur, curPrefix, results);
        return results;
    }
};
int main() {
    fast;
    int N;
    if(!(cin>>N)) return 0;
    vector<string> dict(N);
    for(int i=0;i<N;++i) cin>>dict[i];
    string s; cin>>s;

    Trie trie;
    for(auto &w:dict) trie.insert(w);

    auto ans = trie.autocomplete(s);
    for(auto &w:ans) cout<<w<<" ";
    cout<<endl;
    return 0;
}