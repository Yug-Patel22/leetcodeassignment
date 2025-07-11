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
    void sumpath(TreeNode * root,int tar,int & s,bool & ans){
        if(!root)return;
        s+=root->val;
        
        if(!root->left && !root->right){
            if(s == tar){
                ans=true;
                return;
            }
            s-=root->val;
            return;
        }
        sumpath(root->left,tar,s,ans);
        sumpath(root->right,tar,s,ans);
        s-=root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int s=0;
        bool ans=false;
        sumpath(root,targetSum,s,ans);
        return ans;
    }
};