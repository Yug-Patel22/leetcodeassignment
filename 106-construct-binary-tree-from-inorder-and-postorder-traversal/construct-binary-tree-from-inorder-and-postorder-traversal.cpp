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
    TreeNode * helper(vector<int>&postorder,unordered_map<int,int>&um,int &postind ,int l, int r){
        if(l>r)return nullptr;
        TreeNode * root=new TreeNode(postorder[postind]);
        int i=um[postorder[postind--]];
        root->right=helper(postorder,um,postind,i+1,r);
        root->left=helper(postorder,um,postind,l,i-1);   
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.size()!=inorder.size())return nullptr;
        unordered_map<int,int>um;
        for(int i=0; i<inorder.size();i++){
            um[inorder[i]]=i;
        }
        int postind=postorder.size()-1;
        TreeNode *root=helper(postorder,um,postind,0,inorder.size()-1);
        return root;
    }
};