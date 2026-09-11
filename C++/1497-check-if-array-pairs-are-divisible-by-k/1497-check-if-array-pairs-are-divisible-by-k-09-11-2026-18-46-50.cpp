class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k, 0);
        for (int x : arr) {
            int r = ((x % k) + k) % k;
            freq[r]++;
        }
        // remainder 0 ka pair 0 ke saath
        if (freq[0] % 2 != 0)
            return false;
        for (int r = 1; r < k; r++) {
            int partner = k - r;
            if (freq[r] != freq[partner])
                return false;
        }
        return true;
    }
};