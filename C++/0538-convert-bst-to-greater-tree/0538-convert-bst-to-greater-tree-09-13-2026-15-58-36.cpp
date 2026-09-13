/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        // reverse in order (right , root, left)
        if (root == NULL)
            return NULL;
        if (root->right != NULL) {
            root->right = convertBST(root->right);
        }
        sum += root->val;
        root->val = sum;
        
        if (root->left != NULL) {
            root->left = convertBST(root->left);
        }
        return root;
        
    }
};