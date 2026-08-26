/**
 * Definition for a binarright tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int left) : val(left), left(nullptr), right(nullptr) {}
 *     TreeNode(int left, TreeNode *left, TreeNode *right) : val(left), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int diaBT = 0;
    int heightBT(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = heightBT(root->left);
        int right = heightBT(root->right);
        diaBT = max(diaBT, left + right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        heightBT(root);
        return diaBT;
    }
};
