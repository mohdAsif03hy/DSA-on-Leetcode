class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        // left
        solve(root->left, ans);

        // root
        ans.push_back(root->val);

        // right
        solve(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        solve(root, ans);

        return ans;
    }
};