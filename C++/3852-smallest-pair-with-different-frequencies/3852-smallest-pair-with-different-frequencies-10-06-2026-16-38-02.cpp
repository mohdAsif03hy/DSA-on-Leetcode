class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        int x = INT_MAX;
        // smallest value
        for (auto [num, count] : freq) {
            x = min(x, num);
        }
        int y = INT_MAX;
        // smallest y with different frequency
        for (auto [num, count] : freq) {
            if (num > x && count != freq[x]) {
                y = min(y, num);
            }
        }
        if (y == INT_MAX)
            return {-1, -1};

        return {x, y};
    }
};