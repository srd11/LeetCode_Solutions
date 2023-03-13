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
    bool isSymmetric(TreeNode* root) {
        
        TreeNode *l,*r;
        if(!root)
            return true;
        
        queue<TreeNode*> q1,q2;
        q1.push(root -> left);
        q2.push(root->right);
        
        while(!q1.empty() && !q2.empty()){
            l=q1.front();
            r=q2.front();
            q1.pop();
            q2.pop();
            
            if(l == NULL && r == NULL )
                continue;
            
            if (NULL == l || NULL == r)
                return false;
            if (l->val != r->val)
                return false;
            
            q1.push(l -> left);
            q1.push(l -> right);
            q2.push(r -> right);
            q2.push(r -> left);
        }
        return true;
    }
};