class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        // root
        ans.push_back(root->val);

        // left
        solve(root->left, ans);

        // right
        solve(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;

        solve(root, ans);

        return ans;
    }
};