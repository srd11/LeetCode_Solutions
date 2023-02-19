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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> level;
        queue<TreeNode*> q;

        
        if(root){
             q.push(root);
             level.push_back(root->val);
             ans.push_back(level);
             level.clear();
             int flag = 1;
            
             while(!q.empty()){
                     
             for(int i=0,n=q.size();i<n;i++){
                     TreeNode* tmp = q.front();
                        q.pop();
                           
                        if(tmp -> left){
                            q.push(tmp -> left);
                            level.push_back(tmp -> left -> val);
                        }
                       if(tmp -> right)
                        {
                            q.push(tmp -> right);
                            level.push_back(tmp -> right -> val);
                        }
                      
                     
                     
                     
                 }
                 
                 if(!level.empty()){
                     if(flag == 1){
                         reverse(level.begin(),level.end());
                         ans.push_back(level);
                         level.clear();
                         flag=0;
                     }
                     else{
                         ans.push_back(level);
                         level.clear();
                         flag=1;
                  
                     }
                 }
                 
                     
                         
             }
                 
                 
        }
        
       
        return ans;
        
    }
};

