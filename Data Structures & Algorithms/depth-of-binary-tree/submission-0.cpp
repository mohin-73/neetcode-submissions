/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int depthBT(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int x = 1 + depthBT(root->left);
        int y = 1 + depthBT(root->right);
        return max(x, y);
    }
    int maxDepth(TreeNode* root) {
        return depthBT(root);
    }
};
