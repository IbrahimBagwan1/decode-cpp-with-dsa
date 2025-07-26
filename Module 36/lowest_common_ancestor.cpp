#include <iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool exist(TreeNode* root, TreeNode* target) {
        if (root == NULL) return false;
        if (root == target) return true;
        return exist(root->left, target) || exist(root->right, target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root == p || root == q) return root;

        bool pLeft = exist(root->left, p);
        bool qLeft = exist(root->left, q);

        // If one node is on left and another on right, root is LCA
        if (pLeft && !qLeft) return root;
        if (!pLeft && qLeft) return root;

        // If both are on left
        if (pLeft && qLeft) 
            return lowestCommonAncestor(root->left, p, q);

        // If both are on right
        return lowestCommonAncestor(root->right, p, q);
    }
};

// Example usage
int main() {
    // Example Tree:
    //        3
    //       / \
    //      5   1
    //     / \  / \
    //    6  2 0   8
    //      / \
    //     7   4

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    Solution sol;
    TreeNode* p = root->left;            // Node 5
    TreeNode* q = root->left->right->right; // Node 4

    TreeNode* lca = sol.lowestCommonAncestor(root, p, q);
    cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    return 0;
}