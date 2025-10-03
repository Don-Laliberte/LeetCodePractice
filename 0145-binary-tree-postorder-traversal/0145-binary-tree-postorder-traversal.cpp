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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;
        traverse(root, &output);
        return output;
    }

    int traverse(TreeNode* node, vector<int>* output) {
        if (node == nullptr) {
            return 1;
        }
        if (node->left) {
            traverse(node->left, output);
        }
        if (node->right) {
            traverse(node->right, output);
        }
        output->push_back(node->val);
        return 0;
    }
};