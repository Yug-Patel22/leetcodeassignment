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
    TreeNode * nextin(TreeNode * t){
        TreeNode *pre=t;
        t=t->right;
        if(!t->left){
            pre->right=t->right;
            return t;
        }
        while(t->left){
            pre=t;
            t=t->left;
        }
        pre->left=t->right;
        return t;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return root;
        if(root->val==key){
            if(!root->left && !root->right)return nullptr;
            else if(!root->left || !root->right){
                if(!root->left)return root->right;
                else return root->left;
            }
            else{
                TreeNode*n=nextin(root);
                n->left=root->left;
                n->right=root->right;
                return n;
            }
        }

        TreeNode *t=root;
        TreeNode *pre=nullptr;
        while(t){
            if(t->val==key){
                if(!t->left && !t->right){
                    if(pre->val>key)pre->left=nullptr;
                    else pre->right=nullptr;
                }
                else if(!t->left || !t->right){
                    if(!t->left){
                        if(pre->val>key)pre->left=t->right;
                        else pre->right=t->right;
                    }
                    else{
                        if(pre->val>key)pre->left=t->left;
                        else pre->right=t->left;
                    }
                }
                else{
                    TreeNode *n=nextin(t);
                    if(pre->val>key){
                        pre->left=n;
                        n->left=t->left;
                        n->right=t->right;
                    }
                    else{
                        pre->right=n;
                        n->left=t->left;
                        n->right=t->right;
                    }
                }
                break;
            }
            pre=t;
            if(t->val>key)t=t->left;
            else t=t->right;
        }
        return root;
    }
};