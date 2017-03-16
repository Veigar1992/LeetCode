/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode* > myQ;
        myQ.push(root);
        int res=0;
        while(!myQ.empty()){
            TreeNode* tmp = myQ.front();
            myQ.pop();
            if (NULL == tmp) break;
            if (NULL != tmp->left){
                if (NULL == tmp->left->left && NULL == tmp->left->right)
                    res += tmp->left->val;
                else
                    myQ.push(tmp->left);
            }
            if (NULL != tmp->right){
                myQ.push(tmp->right);
            }
        }
        return res;
    }
};
