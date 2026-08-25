class Solution {
public:
    unordered_map<int, int> inMap;
    TreeNode* build(vector<int>& preorder,
                    int preStart,
                    int inStart,
                    int inEnd) {
        // Base case
        if (inStart > inEnd) {
            return NULL;
        }
        // Current subtree ka root
        int rootValue = preorder[preStart];
        TreeNode* root = new TreeNode(rootValue);
        // O(1) mein root ka inorder index
        int i = inMap[rootValue];
        // Left subtree ka size
        int leftSize = i - inStart;
        // Left subtree
        root->left = build(
            preorder,
            preStart + 1,
            inStart,
            i - 1
        );
        // Right subtree
        root->right = build(
            preorder,
            preStart + leftSize + 1,
            i + 1,
            inEnd
        );
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder) {
        // Inorder ke elements ka index store karo
        for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }

        return build(
            preorder,
            0,
            0,
            inorder.size() - 1
        );
    }
};