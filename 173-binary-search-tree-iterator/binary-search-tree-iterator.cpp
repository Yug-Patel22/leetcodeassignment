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
class BSTIterator {
    vector<int>v;
    int i;
public:
    void in(TreeNode * root){
        if(!root)return;
        in(root->left);
        v.push_back(root->val);
        in(root->right);
    }
    BSTIterator(TreeNode* root) {
        in(root);
        i=-1;
    }
    
    int next() {
        if(i+1>=v.size()){
            return -1;
        }
        return v[++i];
    }
    
    bool hasNext() {
        if(i+1>=v.size()){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */