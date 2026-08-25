class Solution {
public:

    pair<int, int> solve(TreeNode* root) {

        // diameter, height
        if (root == NULL)
            return {0, 0};

        pair<int, int> leftInfo = solve(root->left);

        pair<int, int> rightInfo = solve(root->right);

        int currDia =
            leftInfo.second +
            rightInfo.second;

        int finalDia =
            max(currDia,
                max(leftInfo.first, rightInfo.first));

        int finalHt =
            max(leftInfo.second,
                rightInfo.second) + 1;

        return {finalDia, finalHt};
    }

    int diameterOfBinaryTree(TreeNode* root) {

        return solve(root).first;
    }
};