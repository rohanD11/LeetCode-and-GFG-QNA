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
   void solve(TreeNode *root,vector<string>&ans,string s){
      
       if(root->left==NULL&&root->right==NULL){
           ans.push_back(s+to_string(root->val));
       }
       if(root->left)
       solve(root->left,ans,s+std::to_string(root->val)+"->");
       if(root->right)
       solve(root->right,ans,s+std::to_string(root->val)+"->");
   }

    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        vector<string>ans;
        if(root)
             solve(root,ans,"");
             return ans;
    }
};