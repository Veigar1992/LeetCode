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
    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode*> myQ;
        priority_queue<int> myPQ;
        myQ.push(root);
        int res=0, minres=99999999;
        while(!myQ.empty()){
            TreeNode* tmp = myQ.front();
            myQ.pop();
            myPQ.push(tmp->val);
            if (NULL != tmp->left){
                myQ.push(tmp->left);
            }
            if (NULL != tmp->right){
                myQ.push(tmp->right);
            }
        }
        int len = myPQ.size();
        res = myPQ.top();
        myPQ.pop();
        for (int i=1;i<len;i++){
            int cur = myPQ.top();
            myPQ.pop();
            minres = min(minres, res-cur);
            res = cur;
        }
        return minres;
    }
};
