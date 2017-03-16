/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <queue>
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (NULL == root) return NULL;
        TreeNode* tmp = new TreeNode(root->val);
        tmp->left = invertTree(root->right);
        tmp->right = invertTree(root->left);
        return tmp;
    }
};
