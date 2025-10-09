
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        TreeNode* inverted_left = invertTree(root->left);
        TreeNode* inverted_right = invertTree(root->right);

        root->left = inverted_right;
        root->right = inverted_left;

        return root;
    }
};