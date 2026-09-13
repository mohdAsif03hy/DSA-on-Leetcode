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
    TreeNode* buildBSTfromVector(vector<int>& arr, int st, int end) {
        if (st > end) {
            return NULL;
        }
        int mid = st + (end - st) / 2;
        TreeNode* curr = new TreeNode(arr[mid]);
        curr->left = buildBSTfromVector(arr, st, mid - 1);
        curr->right = buildBSTfromVector(arr, mid + 1, end);
        return curr;
    }
    void inorderTraversal(TreeNode* root, vector<int>& inorder) {
        if (root == NULL) {
            return;
        }
        inorderTraversal(root->left, inorder);
        inorder.push_back(root->val);
        inorderTraversal(root->right, inorder);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorder;
        // BST → sorted array
        inorderTraversal(root, inorder);
        // Sorted array → balanced BST
        return buildBSTfromVector(inorder, 0, inorder.size() - 1);
    }
};