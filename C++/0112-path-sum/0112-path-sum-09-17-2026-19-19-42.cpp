class Solution {
public:

    bool pathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;
        // Leaf node
        if (root->left == NULL && root->right == NULL) {
            return root->val == targetSum;
        }
        targetSum = targetSum - root->val;
        return pathSum(root->left, targetSum) ||
               pathSum(root->right, targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathSum(root, targetSum);
    }
};