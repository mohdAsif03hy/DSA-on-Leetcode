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

    void getInorder(TreeNode* root, vector<int>& nodes) {
        if (root == NULL) {
            return;
        }

        getInorder(root->left, nodes);

        nodes.push_back(root->val);

        getInorder(root->right, nodes);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        vector<int> nodes1;
        vector<int> nodes2;
        vector<int> merged;

        getInorder(root1, nodes1);
        getInorder(root2, nodes2);

        int i = 0;
        int j = 0;

        while (i < nodes1.size() && j < nodes2.size()) {

            if (nodes1[i] < nodes2[j]) {
                merged.push_back(nodes1[i]);
                i++;
            }
            else {
                merged.push_back(nodes2[j]);
                j++;
            }
        }

        while (i < nodes1.size()) {
            merged.push_back(nodes1[i]);
            i++;
        }

        while (j < nodes2.size()) {
            merged.push_back(nodes2[j]);
            j++;
        }

        return merged;
    }
};