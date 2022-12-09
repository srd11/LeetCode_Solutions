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
    int ans = 0;
    int maxAncestorDiff(TreeNode* root) {
        dfs(root, root -> val, root -> val);
        return ans;
    }
    void dfs(TreeNode* root, int curMin, int curMax) {
        if(!root) return;
        ans = max({ans, root -> val - curMin, curMax - root -> val});
		curMin = min(curMin, root -> val);
        curMax = max(curMax, root -> val);
        dfs(root -> left, curMin, curMax);
        dfs(root -> right, curMin, curMax);
    }
};