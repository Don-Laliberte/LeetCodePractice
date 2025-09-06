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
    bool isSymmetric(TreeNode* root) {
        if (!root) return 1;
        if (!root->left && !root->right) return 1;
        return isSymmetricHelper(root->left,root->right);
    }

    bool isSymmetricHelper(TreeNode* a, TreeNode* b) {
        if (!a && !b) return 1;
        if (!a || !b) return 0;
        return a->val == b->val and isSymmetricHelper(a->left, b->right) and isSymmetricHelper(a->right, b->left); // Checks recursively if all the values are the same
    }
};