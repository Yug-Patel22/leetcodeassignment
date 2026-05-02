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
    int h(TreeNode * root){
        if(!root)return 0;
        return 1+max(h(root->left),h(root->right));
    }
    void pre(TreeNode * root,int &maxi){
        if(!root)return;
        maxi=max(maxi,h(root->left)+h(root->right));
        pre(root->left,maxi);
        pre(root->right,maxi);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        pre(root,maxi);
        return maxi;
    }
};