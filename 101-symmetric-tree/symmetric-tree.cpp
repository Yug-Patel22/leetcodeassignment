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
    void help(TreeNode *root1,TreeNode* root2,bool & ans){
        if(!root1 && !root2 || !ans)return;
        if(!root1 && root2 || root1 && !root2 || root1->val!=root2->val){
            ans=false;
            return;
        }
        help(root1->left,root2->right,ans);
        help(root1->right,root2->left,ans);
    }
    bool isSymmetric(TreeNode* root) {
        bool ans=true;
        help(root->left,root->right,ans);
        return ans;
    }
};