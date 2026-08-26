class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> ans;

        if (root == NULL)
            return {};

        // Leaf node
        if (root->left == NULL && root->right == NULL) {
            return {to_string(root->val)};
        }

        vector<string> left = binaryTreePaths(root->left);
        vector<string> right = binaryTreePaths(root->right);

        // Left subtree ke paths
        for (string path : left) {
            ans.push_back(to_string(root->val) + "->" + path);
        }

        // Right subtree ke paths
        for (string path : right) {
            ans.push_back(to_string(root->val) + "->" + path);
        }

        return ans;
    }
};