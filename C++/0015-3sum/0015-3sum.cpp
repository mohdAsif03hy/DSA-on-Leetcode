class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int curr = 0; curr < nums.size() - 2; curr++) {

            // Duplicate fixed element skip
            if (curr > 0 && nums[curr] == nums[curr - 1])
                continue;

            int left = curr + 1;
            int right = nums.size() - 1;

            while (left < right) {

                int sum = nums[curr] + nums[left] + nums[right];

                if (sum < 0) {
                    left++;
                }
                else if (sum > 0) {
                    right--;
                }
                else {
                    ans.push_back({
                        nums[curr],
                        nums[left],
                        nums[right]
                    });

                    left++;
                    right--;

                    // Duplicate left values skip
                    while (left < right &&
                           nums[left] == nums[left - 1]) {
                        left++;
                    }

                    // Duplicate right values skip
                    while (left < right &&
                           nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};