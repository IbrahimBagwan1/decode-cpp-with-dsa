#include <iostream>
#include <vector>
#include <algorithm>
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
    // Function to calculate height (levels) of tree
    int level(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }

    // Function to collect nodes of a specific level
    void print_level(TreeNode* root, int level, int req, vector<int>& ans) {
        if (root != nullptr) {
            if (level == req) {
                ans.push_back(root->val);
            }
            print_level(root->left, level + 1, req, ans);
            print_level(root->right, level + 1, req, ans);
        }
    }

    // Main function to return level order traversal
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> finalAns;
        if (root == NULL) 
            return finalAns;
        
        int n = level(root);  // Total levels
        for (int i = 1; i <= n; i++) {
            vector<int> ans;
            print_level(root, 1, i, ans);
            finalAns.push_back(ans);
        }
        return finalAns;
    }
};

// Example usage
int main() {
    // Example tree:
    //       3
    //      / \
    //     9   20
    //        /  \
    //       15   7
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    vector<vector<int>> result = sol.levelOrder(root);

    cout << "Level Order Traversal:" << endl;
    for (auto &level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}