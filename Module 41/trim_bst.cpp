#include <iostream>
#include <climits>
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
    // Helper to fix subtrees
    void helper(TreeNode* root, int low, int high) {
        if (!root) return;

        // Fix left subtree link
        while (root->left) {
            if (root->left->val < low) 
                root->left = root->left->right;   // Skip left node (too small)
            else if (root->left->val > high) 
                root->left = root->left->left;    // Skip left node (too large)
            else 
                break;
        }

        // Fix right subtree link
        while (root->right) {
            if (root->right->val > high) 
                root->right = root->right->left;  // Skip right node (too large)
            else if (root->right->val < low) 
                root->right = root->right->right; // Skip right node (too small)
            else 
                break;
        }

        helper(root->left, low, high);
        helper(root->right, low, high);
    }

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        // Dummy node to handle possible root change easily
        TreeNode* dummy = new TreeNode(INT_MAX);
        dummy->left = root;

        // Adjust children recursively
        helper(dummy, low, high);

        // Return possibly new root
        return dummy->left;
    }
};

// ---------- Test Example ----------
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(0);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(1);

    Solution sol;
    TreeNode* trimmed = sol.trimBST(root, 1, 3);

    cout << "Inorder of trimmed tree: ";
    inorder(trimmed); // Should print 1 2 3
    cout << endl;

    return 0;
}