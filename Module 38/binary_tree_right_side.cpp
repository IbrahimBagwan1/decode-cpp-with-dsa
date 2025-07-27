#include <iostream>
#include <vector>
using namespace std;

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
    int levels(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void preorder(TreeNode* root, vector<int> &ans, int level) {
        if (!root) return;
        ans[level] = root->val;                // keep updating with last seen node at that level
        preorder(root->right, ans, level + 1); // visit right first
        preorder(root->left, ans, level + 1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root), 0);
        preorder(root, ans, 0);
        return ans;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    Solution sol;
    vector<int> view = sol.rightSideView(root);
    cout << "Right side view: ";
    for (int x : view) cout << x << " ";
    cout << endl;
    return 0;
}
