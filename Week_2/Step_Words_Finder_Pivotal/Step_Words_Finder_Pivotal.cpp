#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool isStepWord(const string &base, const string &word) {
    if(word.size()!=base.size()+1) 
    return false;

    unordered_map<char, int> freqBase, freqWord;
    for(char c:base) 
    freqBase[c]++;
    for (char c:word) freqWord[c]++;

    int diff = 0;
    for(char c='a';c<='z';++c){
        int fb = freqBase[c], fw = freqWord[c];
        if(fw<fb) 
        return false;
        diff += fw - fb;
    }
    return diff == 1;
}

int main() {
    string base;
    int n;
    cin>>base>>n;
    vector<string> result;
    for(int i=0;i<n;++i){
        string word;
        cin>>word;
        if(isStepWord(base,word)) result.push_back(word);
    }
    sort(result.begin(),result.end());
    for(const string &w:result) {
        cout<<w<<endl;
    }
    return 0;
}