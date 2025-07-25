#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lcsOfThree(const string &s1, const string &s2, const string &s3) {
    int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();

    vector<vector<vector<int>>> dp(n1 + 1,
        vector<vector<int>>(n2 + 1, vector<int>(n3 + 1, 0)));

    for(int i = 1; i <= n1; ++i) {
        for(int j = 1; j <= n2; ++j) {
            for(int k = 1; k <= n3; ++k) {
                if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) {
                    dp[i][j][k] = 1 + dp[i - 1][j - 1][k - 1];
                } 
                else {
                    dp[i][j][k] = max({
                        dp[i - 1][j][k],
                        dp[i][j - 1][k],
                        dp[i][j][k - 1]
                    });
                }
            }
        }
    }

    return dp[n1][n2][n3];
}

int main() {
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    cout<<lcsOfThree(s1,s2,s3)<<endl;
    return 0;
}