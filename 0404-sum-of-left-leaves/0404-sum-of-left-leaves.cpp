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
   void solvee(TreeNode *root,int &sum,int n){
       if(root==NULL){
           return ;
       }
       if(root->left==NULL&&root->right==NULL){
           if(n==-1)
           sum+=root->val;
       }
       solvee(root->left,sum,-1);
       solvee(root->right,sum,1);

   }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL&&root->right==NULL){
            return 0;
        }
        int ans=0;
        solvee(root,ans,0);
        return ans;
    }
};