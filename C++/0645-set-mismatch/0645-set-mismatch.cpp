class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int duplicate = -1;
        int missing = -1;
        int n = nums.size();

        // Check if 1 is missing
        if (nums[0] != 1)
            missing = 1;

        for (int i = 0; i < n - 1; i++) {

            // Duplicate
            if (nums[i] == nums[i + 1])
                duplicate = nums[i];

            // Missing (gap found)
            if (nums[i + 1] - nums[i] > 1)
                missing = nums[i] + 1;
        }

        // Check if last number is missing
        if (nums[n - 1] != n)
            missing = n;

        return {duplicate, missing};
    }
};