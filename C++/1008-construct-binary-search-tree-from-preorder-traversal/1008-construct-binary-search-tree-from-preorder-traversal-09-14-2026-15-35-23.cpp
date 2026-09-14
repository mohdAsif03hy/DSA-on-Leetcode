class Solution {
public:
    TreeNode* printInrange(TreeNode* root, int start, int end) {
        if (root == NULL)
            return NULL;
        if (start <= root->val && root->val <= end) {
            printInrange(root->left, start, end);
            printInrange(root->right, start, end);
        } else if (root->val < start) {
            printInrange(root->right, start, end);
        } else {
            printInrange(root->left, start, end);
        }
        return root;
    }
    TreeNode* buildBST(vector<int>& preorder, int n) {
        TreeNode* root = NULL;
        for (int i = 0; i < n; i++) {
            root = insert(root, preorder[i]);
        }
        return root;
    }
    TreeNode* insert(TreeNode* root, int val) {
        if (root == NULL) {
            root = new TreeNode(val);
            return root;
        }
        if (val < root->val) {
            root->left = insert(root->left, val);
        } else {
            root->right = insert(root->right, val);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = buildBST(preorder, preorder.size());
        return printInrange(root, preorder[0], preorder[preorder.size() - 1]);
    }
};