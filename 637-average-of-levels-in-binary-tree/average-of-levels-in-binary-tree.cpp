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
    int height(TreeNode * root){
        if(!root)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void ave(TreeNode * root,vector<double> & ans,vector<int> & count, int & c){
        if(!root)return;
        c++;
        count[c]++;
        ans[c]+=root->val;
        ave(root->left,ans,count,c);
        ave(root->right,ans,count,c);
        c--;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int a=height(root);
        vector<double>ans(a,0);
        vector<int>v(a,0);
        int c=-1;
        ave(root,ans,v,c);
        for(int i=0; i<v.size(); i++){
            ans[i]/=v[i];
        }
        return ans;
    }
};