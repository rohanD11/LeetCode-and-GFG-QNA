/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        if(o==NULL){
            return NULL;
        }
       if(o->val==t->val&&c->val==t->val){
           return c;
       }
       TreeNode*x=getTargetCopy(o->left,c->left,t);
       if(x){
           return x;
       }
       TreeNode *y=getTargetCopy(o->right,c->right,t);
       if(y){
           return y;
       }

       return NULL;


    }
};