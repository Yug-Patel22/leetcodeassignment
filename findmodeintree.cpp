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
    void tra(TreeNode * root,unordered_map<int,int> & um){
        if(!root)return;
        um[root->val]++;
        tra(root->left,um);
        tra(root->right,um);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> um;
        int maxi=INT_MIN;
        vector<int> v;
        tra(root,um);
        for(auto p:um){
            if(maxi<p.second)maxi=p.second;
        }
        for(auto p:um){
            if(p.second==maxi)v.push_back(p.first);
        }
        return v;
    }
};