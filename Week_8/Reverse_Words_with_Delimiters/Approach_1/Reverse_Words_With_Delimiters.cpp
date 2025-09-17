// Author: Prakhar Patel
// Date: 2025-09-17
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool isAlpha(char c){
    return (c>='a'&&c<='z');
}
string reverseWordsWithDelimiters(string s){
    vector<string> words;
    vector<pair<int, string>> delimiters;

    int n = s.size();
    string temp = "";
    for(int i=0;i<n;i++){
        if(isAlpha(s[i])){
            temp += s[i];
        }
        else{
            if(!temp.empty()){
                words.push_back(temp);
                temp.clear();
            }
            delimiters.push_back({i,string(1,s[i])});
        }
    }
    if(!temp.empty()) words.push_back(temp);

    reverse(words.begin(),words.end());

    string result = "";
    int wi=0,di=0;
    for(int i=0;i<n;i++){
        if(di<delimiters.size()&&delimiters[di].first==i){
            result += delimiters[di].second;
            di++;
        }
        else{
            result += words[wi][0];
            words[wi].erase(words[wi].begin());
            if(words[wi].empty()) wi++;
        }
    }
    return result;
}
int main() {
    fast;
    cout<<reverseWordsWithDelimiters("hello/world:here")<<endl;
    cout<<reverseWordsWithDelimiters("hello/world:here/")<<endl;
    cout<<reverseWordsWithDelimiters("hello//world:here")<<endl;
}