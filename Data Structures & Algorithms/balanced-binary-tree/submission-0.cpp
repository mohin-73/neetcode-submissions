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
    bool res = true;
    int heightBT(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = heightBT(root->left);
        int right = heightBT(root->right);
        int diff = abs(right - left);
        if (diff > 1) {
            res = false;
        }
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        heightBT(root);
        return res;
    }
};
