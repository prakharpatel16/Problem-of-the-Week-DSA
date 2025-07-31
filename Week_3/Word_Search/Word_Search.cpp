#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m, n;
    vector<vector<int>> directions{{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool findword(int i, int j, int ind, vector<vector<char>>& board, string &word) {
        if(ind == word.size()) return true;
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='$') return false;
        if (board[i][j] != word[ind]) return false;

        char temp = board[i][j];
        board[i][j] = '$';

        for(auto &dir:directions){
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            if(findword(new_i,new_j,ind+1,board,word))
                return true;
        }

        board[i][j] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();

        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(board[i][j]==word[0] && findword(i,j,0,board,word))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    int rows, cols;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;

    vector<vector<char>> board(rows, vector<char>(cols));
    cout<<"Enter the board characters row-wise:\n";
    for(int i=0;i<rows;++i)
        for(int j=0;j<cols;++j)
            cin>>board[i][j];

    string word;
    cout<<"Enter the word to search: ";
    cin>>word;

    Solution sol;
    if(sol.exist(board,word))
        cout<<"Word found in board"<<endl;
    else
        cout<<"Word not found in board"<<endl;

    return 0;
}