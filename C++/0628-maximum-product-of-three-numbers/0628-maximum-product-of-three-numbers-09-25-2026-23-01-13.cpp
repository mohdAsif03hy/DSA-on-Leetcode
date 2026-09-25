class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int ans1 = 1;
        int count = 0;
        sort(nums.begin(), nums.end());
        return max(nums[0] * nums[1] * nums[n - 1],
                   nums[n - 1] * nums[n - 2] * nums[n - 3]);
    }
};