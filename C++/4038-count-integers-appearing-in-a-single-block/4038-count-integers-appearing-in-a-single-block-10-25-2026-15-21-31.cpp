class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans = 0;
        vector<bool> bad(101, false);
        vector<bool> closed(101, false);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                closed[nums[i - 1]] = true;
            }
            if (closed[nums[i]]) {
                bad[nums[i]] = true;
            }
        }
        for (int x : nums) {
            if (!bad[x]) {
                ans++;
                bad[x] = true;
            }
        }
        return ans;
    }
};