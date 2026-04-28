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
    vector<int> dfs(TreeNode* node, vector<int>& result) {

        stack<TreeNode*> st;
        TreeNode* curr = node;

        while(curr || !st.empty()) {
            while(curr) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            result.push_back(curr->val);

            curr = curr->right;
        }
        return result;

    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        dfs(root,result);
        return result;

    }
};