class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> mp;

        for (int b = n - 3; b >= 1; b--) {
            for (int d = b + 2; d < n; d++) {
                mp[nums[d] - nums[b + 1]]++;
            }

            for (int a = 0; a < b; a++) {
                ans += mp[nums[a] + nums[b]];
            }
        }

        return ans;
    }
};
