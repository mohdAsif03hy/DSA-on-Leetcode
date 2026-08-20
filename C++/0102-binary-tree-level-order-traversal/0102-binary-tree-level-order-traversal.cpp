class Solution {
public:
    void solve(TreeNode* root, vector<vector<int>>& ans) {
        if (root == NULL)
            return;

        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);

        vector<int> currentLevel;

        while (!Q.empty()) {
            TreeNode* curr = Q.front();
            Q.pop();
            if (curr == NULL) {
                ans.push_back(currentLevel);
                currentLevel.clear();
                if (!Q.empty()) {
                    Q.push(NULL);
                }
            } else {
                currentLevel.push_back(curr->val);
                if (curr->left != NULL) {
                    Q.push(curr->left);
                }
                if (curr->right != NULL) {
                    Q.push(curr->right);
                }
            }
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        solve(root, ans);
        return ans;
    }
};