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
    void sum( TreeNode *root,int & s,int flag){
        if(!root)return;
        if(flag && !root->left && !root->right)s+=root->val;
        sum(root->left,s,1);
        sum(root->right,s,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s=0;
        int flag=0;
        sum(root,s,flag);
        return s;
    }
};