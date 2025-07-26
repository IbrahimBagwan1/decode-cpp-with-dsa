#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<stack>
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
    void levelOrderQueue(TreeNode* root){
      queue<TreeNode*> q;
      q.push(root);
      while(q.size() > 0) {  
        TreeNode* temp = q.front();
        cout<< temp->val<< " ";
        q.pop();
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
      }
    }
};

// Example usage
int main() {
    // Example tree:
    //       3
    //     /   \
    //    9     20
    //   / \   / \
    //  15  7  8  10

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->left->left = new TreeNode(15);
    root->left->right = new TreeNode(7);

    root->right->left = new TreeNode(8);
    root->right->right = new TreeNode(10);


    Solution sol;
    queue<TreeNode*> q;
    sol.levelOrderQueue(root);
    return 0;
}
