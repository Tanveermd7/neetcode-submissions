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
        if(!node) return {};

        stack<TreeNode*> st;
        st.push(node);

        while(!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();

            result.push_back(curr->val);

            if(curr->right) st.push(curr->right);
            if(curr->left) st.push(curr->left);
        }
        return result;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        dfs(root,result);
        return result;
    }
};