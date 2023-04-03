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
    void solve(TreeNode*root,map<int,int>&m){
        if(root==NULL){
            return ;
        }
        m[root->val]++;
        solve(root->left,m);
        solve(root->right,m);
    }
    bool isUnivalTree(TreeNode* root) {
        map<int,int>m;
        solve(root,m);
        if(m.size()==1){
            return true;
        }
        return false;
    }
};