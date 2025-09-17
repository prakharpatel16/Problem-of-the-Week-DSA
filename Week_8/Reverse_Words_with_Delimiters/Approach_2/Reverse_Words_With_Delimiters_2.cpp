// Author: Prakhar Patel
// Date: 2025-09-17
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool isAlpha(char c){
    return (c>='a'&&c<='z');
}
string reverseWordsStack(string s){
    vector<string> words;
    string temp = "";

    for(char c:s){
        if(isAlpha(c)) temp += c;
        else{
            if(!temp.empty()){
                words.push_back(temp);
                temp.clear();
            }
        }
    }
    if(!temp.empty()) words.push_back(temp);

    reverse(words.begin(),words.end());
    int wi=0;

    string result = "";
    temp = "";
    for(char c:s){
        if(isAlpha(c)){
            temp += c;
        }
        else{
            if(!temp.empty()){
                result += words[wi++];
                temp.clear();
            }
            result += c;
        }
    }
    if(!temp.empty()) result += words[wi++];
    return result;
}

int main(){
    fast;
    cout<<reverseWordsStack("hello/world:here")<<endl;
    cout<<reverseWordsStack("hello/world:here/")<<endl;
    cout<<reverseWordsStack("hello//world:here")<<endl;
}