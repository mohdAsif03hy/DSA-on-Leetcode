class Solution {
public:
    int rev(int x) {
        int rev = 0;
        while (x > 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0;
        const int MOD = 1e9 + 7;
        for (int i = 0; i < nums.size(); i++) {
            int key = nums[i] - rev(nums[i]);
            count = (count + freq[key]) % MOD;
            freq[key]++;
        }
        return count;
    }
};