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
    TreeNode* help(TreeNode * root){
        if(!root)return nullptr;
        TreeNode * ans=new TreeNode(root->val);
        ans->left=help(root->right);
        ans->right=help(root->left);
        return ans;
    }
    TreeNode* invertTree(TreeNode* root) {
        return help(root);
    }
};