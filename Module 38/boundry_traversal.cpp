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

    bool isleaf(TreeNode* root){
      return root && !root->left && !root->right;
    }

    void inorder(TreeNode* root) {
      if(root==NULL) return ;

      if (root->right == NULL && root->left == NULL) {
        cout<< root->val<< " ";
      }   // Visit root
      inorder(root->left);   // Traverse left
      inorder(root->right);  // Traverse right
        
    }


    void left(TreeNode* root) {
        while(root){
          if(!isleaf(root)) cout<< root->val<< " ";
          if(root->left) root = root->left;
          else root = root->right;
        }
    }

    void right(TreeNode* root) {
      vector<int> ans;
        while(root){
          if(!isleaf(root)) ans.push_back(root->val);
          if(root->right) root = root->right;
          else root = root->left;
        }
        for(int i=ans.size()-1; i>=0; i--){
          cout<<ans[i]<< " ";
        }
    }

    void boundryTraversal(TreeNode* rootfinal){
      if(!rootfinal) return ;
      TreeNode* root = rootfinal->left;
      TreeNode* temp = rootfinal->right;

      if(!isleaf(rootfinal)) cout<< rootfinal->val<< " ";

      left(root);
      inorder(rootfinal);
      right(temp);
    }
};

// Example usage
int main() {
    // Example Tree:
    //               1
    //              / \
    //             2   3
    //            /     \
    //           4       6
    //          /       / \
    //         7       9   10
    //        /            / \
    //       11          13   14
    //      /  \               \
    //    15    16              18
    //   /         \              \
    // 19          17              23
    //             / \             /
    //            20  21         22
    //               /  \
    //             26    29
    //            /  \
    //          24    25
    //                 \
    //                 28

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    // Left Subtree
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(7);
    root->left->left->left->left = new TreeNode(11);
    root->left->left->left->left->left = new TreeNode(15);
    root->left->left->left->left->left->left = new TreeNode(19);
    root->left->left->left->left->right = new TreeNode(16);
    root->left->left->left->left->right->right = new TreeNode(17);
    root->left->left->left->left->right->right->left = new TreeNode(20);
    root->left->left->left->left->right->right->right = new TreeNode(21);
    root->left->left->left->left->right->right->right->left = new TreeNode(26);
    root->left->left->left->left->right->right->right->right = new TreeNode(29);
    root->left->left->left->left->right->right->right->right->right = new TreeNode(24);
    root->left->left->left->left->right->right->right->right->right->right = new TreeNode(25);
    root->left->left->left->left->right->right->right->right->right->right->right = new TreeNode(28);

    // Right Subtree
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);
    root->right->right->right->left = new TreeNode(13);
    root->right->right->right->right = new TreeNode(14);
    root->right->right->right->right->right = new TreeNode(18);
    root->right->right->right->right->right->right = new TreeNode(23);
    root->right->right->right->right->right->right->left = new TreeNode(22);
    root->right->right->right->right->right->right->left->right = new TreeNode(27);
    root->right->right->right->right->right->right->left->right->right = new TreeNode(28);


    Solution sol;
    sol.boundryTraversal(root);
    // required output: 
    // 1 2 4 7 11 15 19 24 25 28 29 20 21 13 22 23 18 14 10 6 3

    return 0;
}
