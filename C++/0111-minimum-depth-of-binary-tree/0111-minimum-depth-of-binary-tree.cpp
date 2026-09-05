class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        // Leaf node
        if (root->left == NULL && root->right == NULL) {
            return 1;
        }
        // Sirf right subtree hai
        if (root->left == NULL) {
            return 1 + minDepth(root->right);
        }
        // Sirf left subtree hai
        if (root->right == NULL) {
            return 1 + minDepth(root->left);
        }
        int leftdepth = minDepth(root->left);
        int rightdepth = minDepth(root->right);
        return 1 + min(leftdepth, rightdepth);
    }
};