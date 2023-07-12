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
    
    int minDepth(TreeNode* root) {
         if (root == nullptr) {
        return 0;
    }
    
    // If the current node is a leaf, return 1
    if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }
    
    // If the current node has only one child, return the minimum depth of that child subtree
    if (root->left == nullptr) {
        return minDepth(root->right) + 1;
    }
    if (root->right == nullptr) {
        return minDepth(root->left) + 1;
    }
    
    // If the current node has both left and right children, return the minimum depth
    // of the subtree with the smaller depth
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);
    return std::min(leftDepth, rightDepth) + 1;
    }
};