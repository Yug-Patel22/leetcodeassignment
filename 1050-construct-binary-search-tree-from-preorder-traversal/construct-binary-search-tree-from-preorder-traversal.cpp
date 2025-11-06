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
    TreeNode* make(vector<int>v,int &i,int bound){
        if(i>=v.size() || v[i]>bound)return nullptr;
        TreeNode * root=new TreeNode(v[i++]);
        root->left=make(v,i,root->val);
        root->right=make(v,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        TreeNode * root=make(preorder,i,INT_MAX);
        return root;
    }
};