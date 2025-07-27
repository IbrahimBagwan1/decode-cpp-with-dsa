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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = new TreeNode(val); // create new node
        if (root == NULL) return temp;

        TreeNode* cur = root;
        TreeNode* prev = NULL;

        while (cur) {
            prev = cur;
            if (val > cur->val)
                cur = cur->right;
            else
                cur = cur->left;
        }

        // attach the new node to the correct position
        if (prev->val > val)
            prev->left = temp;
        else
            prev->right = temp;

        return root;
    }
};

// Utility function to print inorder traversal (to verify insertion)
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
    root = sol.insertIntoBST(root, 5); // Insert value 5

    cout << "Inorder traversal after insertion: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
