class Solution {
public:

    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int n = nums.size();
        vector<int> prefix(n + 1, 0);
        // Prefix sum
        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        int ans = 0;
        // Case 1: firstLen window comes before secondLen
        int firstMax = 0;
        for(int i = firstLen + secondLen; i <= n; i++) {
            int firstSum = prefix[i - secondLen] -
                           prefix[i - secondLen - firstLen];
            firstMax = max(firstMax, firstSum);
            int secondSum = prefix[i] -
                            prefix[i - secondLen];
            ans = max(ans, firstMax + secondSum);
        }
        // Case 2: secondLen window comes before firstLen
        int secondMax = 0;
        for(int i = firstLen + secondLen; i <= n; i++) {
            int secondSum = prefix[i - firstLen] -
                            prefix[i - firstLen - secondLen];
            secondMax = max(secondMax, secondSum);
            int firstSum = prefix[i] -
                           prefix[i - firstLen];
            ans = max(ans, secondMax + firstSum);
        }
        return ans;
    }
};