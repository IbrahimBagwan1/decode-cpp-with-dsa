#include <iostream>
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
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != NULL) {
            if (root->val == val)
                return root;             // Node found
            else if (root->val > val)
                root = root->left;       // Search in left subtree
            else
                root = root->right;      // Search in right subtree
        }
        return NULL;  // Node not found
    }
};

// Utility function to print subtree inorder (to check returned node)
void inorderTraversal(TreeNode* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    // Example BST:
    //        4
    //       / \
    //      2   7
    //     / \
    //    1   3
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution sol;
    TreeNode* result = sol.searchBST(root, 2);

    if (result) {
        cout << "Subtree rooted at 2 (inorder): ";
        inorderTraversal(result);
    } else {
        cout << "Value not found in BST";
    }
    cout << endl;

    return 0;
}