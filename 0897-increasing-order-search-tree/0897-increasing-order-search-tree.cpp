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
 void in(TreeNode*root,vector<TreeNode*>&v){
     if(root==NULL){
         return ;
     }
     in(root->left,v);
     v.push_back(root);
     in(root->right,v);

 }
    TreeNode* increasingBST(TreeNode* root) {
       vector<TreeNode*>v;
       in(root,v);
       TreeNode *pre,*dummy;
       dummy=pre=v[0];
       dummy->left=NULL;
      for(int i=1;i<v.size();i++){
           pre->right=v[i];
           pre=pre->right;
           pre->left=NULL;
      }
      pre->right=NULL;
      return dummy;
    }
};