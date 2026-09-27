class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> mp;

        for (int i : nums) {
            mp.insert(i);
        }
        int ans = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end() && mp.find(-nums[i]) != mp.end()) {
                ans = max(ans, abs(nums[i]));
            }
        }
        return ans;
    }
};