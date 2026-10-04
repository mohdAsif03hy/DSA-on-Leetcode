class Solution {
public:
    bool digitCount(string num) {
        vector<int> ans(10, 0);
        // Count frequency of each digit
        for (int i = 0; i < num.size(); i++) {
            ans[num[i] - '0']++;
        }
        // Check the required frequency
        for (int i = 0; i < num.size(); i++) {
            if (ans[i] != num[i] - '0') {
                return false;
            }
        }
        return true;
    }
};