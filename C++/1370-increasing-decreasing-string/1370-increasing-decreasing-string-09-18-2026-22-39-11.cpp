class Solution {
public:
    string sortString(string s) {
        string ans = "";
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        while (ans.size() < s.size()) {
            for (int i = 0; i < 26; i++) {
                if (freq[i] > 0) {
                    ans.push_back('a' + i);
                    freq[i]--;
                }
            }
            for (int i = 25; i >= 0; i--) {
                if (freq[i] > 0) {
                    ans.push_back('a' + i);
                    freq[i]--;
                }
            }
        }
        return ans;
    }
};