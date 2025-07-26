#include <iostream>
#include <vector>
#include <string>
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
    void helper(TreeNode* root, string s, vector<string> &ans) {
        if (root == nullptr) return;
        
        string ch = to_string(root->val);

        // If leaf node
        if (root->left == nullptr && root->right == nullptr) {
            s += ch;
            ans.push_back(s);
            return;
        }

        // Recurse to left and right with updated path
        helper(root->left, s + ch + "->", ans);
        helper(root->right, s + ch + "->", ans);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root, "", ans);
        return ans;
    }
};

// Example usage
int main() {
    // Building sample tree: 
    //        1
    //       / \
    //      2   3
    //       \
    //        5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<string> paths = sol.binaryTreePaths(root);

    cout << "Paths:" << endl;
    for (auto &path : paths) {
        cout << path << endl;
    }

    return 0;
}