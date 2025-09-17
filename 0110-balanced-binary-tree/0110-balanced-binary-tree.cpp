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
    bool isBalanced(TreeNode *root) {
  	    return (recursiveHeightCheck(root) >= 0);
    }

    int recursiveHeightCheck(TreeNode* root) {

        if (root == nullptr)
            return 0;

        int lHeight = recursiveHeightCheck(root->left);
        int rHeight = recursiveHeightCheck(root->right);
        
        if (lHeight == -1 || rHeight == -1 || abs(lHeight - rHeight) > 1)
            return -1;
            
        return max(lHeight, rHeight) + 1;
    }
};