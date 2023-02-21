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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        if(!root){
            return {};
        }
        vector<vector<int>> ans;
        vector<int> level;
        queue<TreeNode*> q;
        level.push_back(root->val);
        ans.push_back(level);
        level.clear();
        q.push(root);
        
        
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* tmp = q.front();
                q.pop();
                
                if(tmp -> left){
                    q.push(tmp -> left);
                    level.push_back(tmp -> left -> val);
                }
                
                if(tmp -> right){
                    q.push(tmp ->  right);
                    level.push_back(tmp -> right -> val);
                }
            }
            
            if(!level.empty()){
                ans.push_back(level);
                level.clear();

            }
        }
        
         reverse(ans.begin() , ans.end());
        return ans;
        
    }
};