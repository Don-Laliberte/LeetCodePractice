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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p != nullptr && q != nullptr) {
            if (p->val == q->val) { // Check root node
                bool leftside;
                bool rightside;

                // Left
                if (p->left != nullptr && q->left != nullptr) {
                    leftside = isSameTree(p->left, q->left);
                } else if (p->left == nullptr && q->left == nullptr) {
                    leftside = true;
                } else {
                    leftside = false;
                }

                // Right
                if (p->right != nullptr && q->right != nullptr) {
                    rightside = isSameTree(p->right, q->right);
                } else if (p->right == nullptr && q->right == nullptr) {
                    rightside = true;
                } else {
                    rightside = false;
                }

                // Check both
                if (leftside && rightside) {
                    return true;
                } else {
                    return false;
                }

            } else {
                return false;
            }
        }
        else if (p == nullptr && q == nullptr) {
            return true;
        }
        else {
            return false;
        }
    }
};