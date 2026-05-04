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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        int c=1;
        while(!q.empty()){
            vector<int>v;
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode * n=q.front();
                v.push_back(n->val);
                q.pop();
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
            }
            if(c%2==0)reverse(v.begin(),v.end());
            ans.push_back(v);
            c++;
        }
        return ans;
    }
};