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
    void help(TreeNode * o , TreeNode * c,TreeNode * tar,TreeNode * &ans){
        if(!o || !c || ans) return;
        if(o==tar){
            ans=c;
            return;
        }
        help(o->left,c->left,tar,ans);
        help(o->right,c->right,tar,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode * ans=nullptr;
        help(original,cloned,target,ans);
        return ans;
    }
};