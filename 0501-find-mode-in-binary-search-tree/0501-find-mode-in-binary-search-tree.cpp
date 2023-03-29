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
 
    void solve(TreeNode *root,map<int,int>&m){
        if(root==NULL){
      return ;
        }
            solve(root->left,m);
            m[root->val]++;
         solve(root->right,m);
    
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int>m;
        solve(root,m);
        vector<int>v;
        int his=INT_MIN;
        for(auto i:m){
   if(i.second>his){
his=i.second;}
        }
        for(auto i:m){
        if(i.second==his){
v.push_back(i.first);}
        }
     return v;   
    }
};