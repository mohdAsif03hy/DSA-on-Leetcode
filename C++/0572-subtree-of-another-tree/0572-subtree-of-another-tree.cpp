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

    bool isIdentical(TreeNode* root1, TreeNode* root2) {

        // Both are NULL
        if (root1 == NULL && root2 == NULL) {
            return true;
        }

        // One is NULL, other is not
        if (root1 == NULL || root2 == NULL) {
            return false;
        }

        // Values are different
        if (root1->val != root2->val) {
            return false;
        }

        // Check left and right subtree
        return isIdentical(root1->left, root2->left) &&
               isIdentical(root1->right, root2->right);
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        // Empty subtree is always a subtree
        if (subRoot == NULL) {
            return true;
        }

        // Main tree is NULL but subRoot is not
        if (root == NULL) {
            return false;
        }

        // If values match, check whether entire subtree is identical
        if (root->val == subRoot->val) {

            if (isIdentical(root, subRoot)) {
                return true;
            }
        }

        // Search in left subtree OR right subtree
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};