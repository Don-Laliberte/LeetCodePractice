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
    int minDepth(TreeNode *root) {
        return(minDepthCheck(root));
    }

    int minDepthCheck(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        else {
            if (root->left == nullptr && root->right == nullptr) {
                return 1;
            }

            int l,r = INT_MAX;

            if (root->left) {
                l = minDepthCheck(root->left);
            }
            if (root->right) {
                r = minDepthCheck(root->right);
            }

            return min(l,r) + 1;
        }
    }
};