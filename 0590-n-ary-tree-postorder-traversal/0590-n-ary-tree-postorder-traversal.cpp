/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void postOrderHelper(Node *root, vector<int> &result)
    {
        if (root == NULL)
        {
            return ; 
        }

        for (int i = 0 ; i < root -> children.size() ; i ++)
        {
            postOrderHelper (root -> children[i], result) ;   
        }
        result.push_back(root -> val) ; 
    }

    vector<int> postorder(Node* root) {
        vector<int> ans ;
        postOrderHelper(root, ans) ;  
        return ans ; 
    }
};