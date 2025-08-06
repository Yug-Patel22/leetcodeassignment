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
    int maxLevelSum(TreeNode* root) {
        int maxi=0;
        int maxsum=INT_MIN;
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int sum=0;
            level++;
            for(int i=0; i<s; i++){
                TreeNode* n=q.front();
                q.pop();
                sum+=n->val;
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
            }
            if(sum>maxsum){
                maxsum=sum;
                maxi=level;
            }
        }
        return maxi;
    }
};