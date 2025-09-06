/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* a, TreeNode* b) {
        if (!a and !b) return 1; // Checks if both are nullptr (This conveniently works for the last children too)
        if (!a || !b) return 0; // Checks if only is nullptr
        return a->val == b->val and isSameTree(a->left, b->left) and isSameTree(a->right, b->right); // Checks recursively if all the values are the same
    }
};