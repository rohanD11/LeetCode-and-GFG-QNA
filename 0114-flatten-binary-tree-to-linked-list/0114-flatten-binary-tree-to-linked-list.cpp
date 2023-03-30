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
 void pre(TreeNode *root,vector<TreeNode*>&v){
     if(root==NULL){
         return;
     }
     v.push_back(root);
     pre(root->left,v);
     pre(root->right,v);

 }
    void flatten(TreeNode* root) {
        vector<TreeNode*>v;
         pre(root,v);
      TreeNode *dummy=root;
      TreeNode *temp=root;
      if(root!=NULL){
temp->left=NULL;
      for(auto i=1;i<v.size();i++){
          temp->right=v[i];
          temp=temp->right;
           temp->left=NULL;
      }
      temp->right=NULL;
      }
      
    }
};