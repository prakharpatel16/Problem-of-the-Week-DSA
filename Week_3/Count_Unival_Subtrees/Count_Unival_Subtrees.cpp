#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v, Node* l = nullptr, Node* r = nullptr) : val(v), left(l), right(r) {}
};

class Solution {
public:
    int count;

    bool isUnival(Node* node) {
        if(!node)return true;

        bool left = isUnival(node->left);
        bool right = isUnival(node->right);

        if(!left || !right)
            return false;

        if(node->left && node->left->val != node->val)
            return false;
        if(node->right && node->right->val != node->val)
            return false;

        count++;
        return true;
    }

    int countUnivalSubtrees(Node* root) {
        count = 0;
        isUnival(root);
        return count;
    }
};

int main() {
    // Constructing the tree:
    //      0
    //     / \
    //    1   0
    //       / \
    //      1   0
    //     / \
    //    1   1

    Node* tree = new Node(0,
        new Node(1),
        new Node(0,
            new Node(1, new Node(1), new Node(1)),
            new Node(0)
        )
    );

    Solution sol;
    cout<<sol.countUnivalSubtrees(tree) << endl;

    return 0;
}