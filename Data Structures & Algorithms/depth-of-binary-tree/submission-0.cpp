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
private:
    int solve(TreeNode* node) {

        if(!node) return 0;
        

        int lh = solve(node->left);
        int rh = solve(node->right);

        return 1 + max(lh, rh);
    }
public:
    int maxDepth(TreeNode* root) {

        int ans = solve(root);
        return ans;
        
    }
};
