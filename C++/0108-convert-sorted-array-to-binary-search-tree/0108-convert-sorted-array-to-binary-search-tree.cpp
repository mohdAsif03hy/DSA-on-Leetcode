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
    TreeNode* buildBST(vector<int>&nums,int st,int end){
        if(st>end)return NULL;
       int mid = st + (end-st)/2;
       TreeNode* curr = new TreeNode(nums[mid]);
       curr->left = buildBST(nums,st,mid-1);
       curr->right = buildBST(nums,mid+1,end);
        return curr;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       int st = 0;
       int end = nums.size()-1;
       TreeNode* curr =  buildBST(nums,st,end);
       return curr;
    }
};