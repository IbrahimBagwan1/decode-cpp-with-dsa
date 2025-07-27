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
    // Find inorder successor (smallest value in right subtree)
    TreeNode* inordersuccessor(TreeNode* root){
        TreeNode* cur = root;
        while(cur && cur->left != NULL){
            cur = cur->left;
        }
        return cur;
    }

    // Delete a node in BST
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(key < root->val) {
            root->left = deleteNode(root->left, key);
        }
        else if(key > root->val) {
            root->right = deleteNode(root->right, key);
        }
        else {
            // Node found
            if(root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Node with two children
            TreeNode* temp = inordersuccessor(root->right);
            root->val = temp->val;   // copy inorder successor's value
            root->right = deleteNode(root->right, temp->val); // delete inorder successor
        }
        return root;
    }
};

// Example usage
int main(){
    // Build a simple BST: 
    //       5
    //      / \
    //     3   7
    //    / \   \
    //   2   4   8
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(8);

    Solution sol;
    root = sol.deleteNode(root, 7); // Delete node with value 7

    cout << "Root after deletion: " << root->val << endl;  // should print 5
    return 0;
}
