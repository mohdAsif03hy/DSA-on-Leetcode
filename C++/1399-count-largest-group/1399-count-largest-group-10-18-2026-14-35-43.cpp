class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> freq(37, 0);
        for (int i = 1; i <= n; i++) {
            int temp = i;
            int sum = 0;
            while (temp > 0) {
                int lstdig = temp % 10;
                sum += lstdig;
                temp /= 10;
            }
            freq[sum]++;
        }
        int maxFreq = 0;
        for (int i = 1; i < 37; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }
        int ans = 0;
        for (int i = 1; i < 37; i++) {
            if (freq[i] == maxFreq) {
                ans++;
            }
        }
        return ans;
    }
};