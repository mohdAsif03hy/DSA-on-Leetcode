class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot = 0;
        for (int x : nums) {
            tot += x;
        }
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            int right = tot - left - nums[i];
            if (left == right) {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};