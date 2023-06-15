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
    int maxLevelSum(TreeNode* root) {
       if(!root)return 0;
       queue<TreeNode*>q;
       q.push(root);
       int level=1;
       int maxlevel=INT_MIN;
       int ans=INT_MIN;
       while(!q.empty()){
        
        int n=q.size();
        int sum=0;
        for(int i=0;i<n;i++){
          sum+=q.front()->val;
          if(q.front()->left)q.push(q.front()->left);
          if(q.front()->right)q.push(q.front()->right);
          
          q.pop();


        }
        if(sum>ans){
            maxlevel=level;
            ans=sum;
        }
        level++;
       }
       return maxlevel;
    }
};