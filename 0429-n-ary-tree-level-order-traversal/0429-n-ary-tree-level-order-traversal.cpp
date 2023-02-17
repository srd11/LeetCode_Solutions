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
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL)
            return {};
        
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> currentLevel;
            int size = q.size();
            
            for(int i=0;i<size;i++){
                 Node* t = q.front();
                 currentLevel.push_back(t->val);
                 q.pop();
                 
                for(Node* i : t->children){
                    q.push(i);
                }
            }
             ans.push_back(currentLevel);
        }
        return ans;
    }
};