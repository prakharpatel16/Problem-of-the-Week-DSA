#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n, m;
    vector<vector<char>> floodFill(vector<vector<char>>& image, int sr, int sc, char newColor) {
        n = image.size();
        m = image[0].size();
        char oldColor = image[sr][sc];
        if(oldColor==newColor) return image;

        dfs(image, sr, sc, oldColor, newColor);
        return image;
    }

private:
    void dfs(vector<vector<char>>& image, int r, int c, char oldColor, char newColor) {
        if(r < 0 || c < 0 || r >= n || c >= m) return;
        if(image[r][c] != oldColor) return;

        image[r][c] = newColor;
        dfs(image,r+1,c,oldColor,newColor);
        dfs(image,r-1,c,oldColor,newColor);
        dfs(image,r,c+1,oldColor,newColor);
        dfs(image,r,c-1,oldColor,newColor);
    }
};