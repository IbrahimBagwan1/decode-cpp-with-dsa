#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // Preorder traversal storing nodes
    void helper(TreeNode* root, vector<TreeNode*> &ans) {
        if (!root) return;
        ans.push_back(root);          // store root first (preorder)
        helper(root->left, ans);      // traverse left
        helper(root->right, ans);     // traverse right
    }

    void flatten(TreeNode* root) {
        if (!root) return;
        vector<TreeNode*> ans;
        helper(root, ans);

        // Link all nodes in sequence
        for (int i = 0; i < (int)ans.size() - 1; i++) {
            ans[i]->left = NULL;          // flatten requires no left child
            ans[i]->right = ans[i + 1];   // link to next node
        }
        ans.back()->left = NULL;
        ans.back()->right = NULL;  // last node
    }
};

// Example usage
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);

    Solution sol;
    sol.flatten(root);

    // Printing flattened tree (should be 1 -> 2 -> 3 -> 4 -> 5 -> 6)
    TreeNode* curr = root;
    while(curr) {
        cout << curr->val << " ";
        curr = curr->right;
    }
    return 0;
}
