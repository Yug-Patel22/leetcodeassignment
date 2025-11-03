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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)return new TreeNode(val);
        TreeNode * t=root;
        while(t){
            if(t->val>val){
                if(t->left==nullptr){
                    t->left=new TreeNode(val);
                    break;
                }
                t=t->left;
            }
            else{
                if(t->right==nullptr){
                    t->right=new TreeNode(val);
                    break;
                }
                t=t->right;
            }
        }
        return root;
    }
};