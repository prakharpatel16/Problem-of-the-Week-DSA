#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int max_sum;
    
    int helper(TreeNode* node) {
        if(!node) return 0;
        int left = max(helper(node->left),0);
        int right = max(helper(node->right),0);

        int current = node->val+left+right;

        max_sum = max(max_sum,current);

        return node->val+max(left,right);
    }

public:
    int maxPathSum(TreeNode* root){
        max_sum = INT_MIN;
        helper(root);
        return max_sum;
    }
};
int main(){
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    cout<<"Maximum Path Sum:"<<sol.maxPathSum(root)<<endl;

    return 0;
}