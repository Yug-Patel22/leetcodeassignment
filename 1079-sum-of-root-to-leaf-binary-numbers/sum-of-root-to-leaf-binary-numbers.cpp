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
    void sum(int & ans,TreeNode * root,int & temp){
        if(!root)return;
        temp=temp<<1;
        if(root->val==1) temp++;
        if(!root->left && !root->right){
            ans+=temp;
            if(root->val==1)temp--;
            temp=temp>>1;
            
            return;
        }
        sum(ans,root->left,temp);
        sum(ans,root->right,temp);
        if(root->val==1)temp--;
        temp=temp>>1;
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans=0,temp=0;
        sum(ans,root,temp);
        return ans;
    }
};