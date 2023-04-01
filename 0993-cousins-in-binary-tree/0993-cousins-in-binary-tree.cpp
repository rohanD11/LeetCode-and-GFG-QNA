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
int forx=-1,fory=-2;
        TreeNode *xpar=NULL;
        TreeNode *ypar=NULL;
void  solve(TreeNode *root,TreeNode *par,int x,int y,int lev){
     if(root==NULL){
      return ;
     }
     if(root->val==x){
         forx=lev;
         xpar=par;
         return ;
     }
     if(root->val==y){
         fory=lev;
         ypar=par;
         return;
     }
     solve(root->left,root,x,y,lev+1);
     solve(root->right,root,x,y,lev+1);

 }
    bool isCousins(TreeNode* root, int x, int y) {
        
    solve(root,NULL,x,y,0);
    return(forx==fory&&xpar!=ypar);
    }
};