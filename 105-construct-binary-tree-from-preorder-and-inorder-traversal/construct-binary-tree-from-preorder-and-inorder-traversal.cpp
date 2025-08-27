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
    TreeNode * helper(vector<int>&pre,unordered_map<int,int>&in,int &preind,int l,int r){
        if(l>r)return nullptr;
        TreeNode * root=new TreeNode(pre[preind]);
        int i=in[pre[preind++]];
        root->left=helper(pre,in,preind,l,i-1);
        root->right=helper(pre,in,preind,i+1,r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()!=inorder.size())return nullptr;
        int pre=0;
        unordered_map<int,int>um;
        for(int i=0; i<inorder.size(); i++){
            um[inorder[i]]=i;
        }
        TreeNode * root=helper(preorder,um,pre,0,inorder.size()-1);
        return root;
    }
};