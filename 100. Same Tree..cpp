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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if (p == NULL && q == NULL) return true;
        else if (p != NULL && q != NULL) ;
        else return false;
        
        stack<TreeNode*> p_stack;
        stack<TreeNode*> q_stack;
        p_stack.push(p);q_stack.push(q);
        while(!p_stack.empty()){
            TreeNode* p_tmp = p_stack.top();p_stack.pop();
            TreeNode* q_tmp = q_stack.top();q_stack.pop();
            if (p_tmp->val != q_tmp->val){
                return false;
            }
            if ((p_tmp->left == NULL && q_tmp->left != NULL) || (p_tmp->left != NULL && q_tmp->left == NULL)){
                return false;
            }
            else if (p_tmp->left != NULL && q_tmp->left != NULL){
                p_stack.push(p_tmp->left);
                q_stack.push(q_tmp->left);
            }
            if ((p_tmp->right == NULL && q_tmp->right != NULL) || (p_tmp->right != NULL && q_tmp->right == NULL)){
                return false;
            }
            else if (p_tmp->right != NULL && q_tmp->right != NULL){
                p_stack.push(p_tmp->right);
                q_stack.push(q_tmp->right);
            }
        }
        if (q_stack.empty())
            return true;
        return false;
        
    }
};
