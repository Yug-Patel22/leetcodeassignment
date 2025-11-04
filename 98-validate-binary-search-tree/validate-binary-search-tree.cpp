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
    void inord(TreeNode * root,bool & ans,int &prein,bool &hasini){
        if(!root || !ans)return;
        inord(root->left,ans,prein,hasini);
        if(hasini && prein>=root->val){
            ans=false;
            return;
        }
        hasini=true;
        prein=root->val;
        inord(root->right,ans,prein,hasini);
    }
    bool isValidBST(TreeNode* root) {
        bool ans=true,hasini=false;
        int prein=0;
        inord(root,ans,prein,hasini);
        return ans;
    }
};