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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)return true;
        if(!p && q || p && !q)return false;
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(p);
        q2.push(q);
        while(!q1.empty()){
            int s1=q1.size();
            int s2=q2.size();
            if(s1!=s2) return false;
            for(int i=0; i<s1; i++){
                TreeNode * n1=q1.front();
                TreeNode * n2=q2.front();
                q1.pop();
                q2.pop();
                if(n1->val!=n2->val)return false;
                if(n1->left && !n2->left || !n1->left && n2->left)return false;
                if(n1->right && !n2->right || !n1->right && n2->right)return false;
                if(n1->left)q1.push(n1->left);
                if(n1->right)q1.push(n1->right);
                if(n2->left)q2.push(n2->left);
                if(n2->right)q2.push(n2->right);
            }
        }
        return true;
    }
};