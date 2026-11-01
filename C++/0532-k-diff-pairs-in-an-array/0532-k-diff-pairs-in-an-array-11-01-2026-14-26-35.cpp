class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        int count = 0;
        while (j < nums.size()) {
            if (i == j) {
                j++;
                continue;
            }
            int diff = nums[j] - nums[i];
            if (diff == k) {
                count++;
                i++;
                j++;
                while (i < nums.size() && nums[i] == nums[i - 1])
                    i++;
                while (j < nums.size() && nums[j] == nums[j - 1])
                    j++;
            }
            else if (diff < k) {
                j++;
            }
            else {
                i++;
            }
        }
        return count;
    }
};