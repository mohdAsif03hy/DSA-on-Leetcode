class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty())
            return ans;
        int start = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] == nums[i] + 1) {
                continue;
            }
            // Current range ends at i
            int end = i;
            if (start == end) {
                ans.push_back(to_string(nums[start]));
            } 
            else {
                ans.push_back(to_string(nums[start]) + "->" +
                              to_string(nums[end]));
            }
            start = i + 1;
        }
        // Last range
        int end = nums.size() - 1;
        if (start == end) {
            ans.push_back(to_string(nums[start]));
        } 
        else {
            ans.push_back(to_string(nums[start]) + "->" +
                          to_string(nums[end]));
        }
        return ans;
    }
};