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
    void sumo(TreeNode* root,int &sum,int &temp){
        if(!root)return;
        temp=temp*10+root->val;
        if(!root->left && !root->right){
            sum+=temp;
        }
        sumo(root->left,sum,temp);
        sumo(root->right,sum,temp);
        temp/=10;
    }
    int sumNumbers(TreeNode* root) {
        int sum=0,temp=0;
        sumo(root,sum,temp);
        return sum;
    }
};