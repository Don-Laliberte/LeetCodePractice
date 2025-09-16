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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        else {
            return max(preOrderTraversal(root->left,1), preOrderTraversal(root->right,1));
        }
    }

    int preOrderTraversal(TreeNode* node, int depth) {
        if (node == nullptr) {
            return depth;
        }
        else {
            depth++;
            int left = preOrderTraversal(node->left, depth);
            int right = preOrderTraversal(node->right, depth);
            return max(left,right);
        }
    }
};