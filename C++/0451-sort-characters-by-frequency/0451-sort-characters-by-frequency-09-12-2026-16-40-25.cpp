class Solution {
public:
    string frequencySort(string s) {
        vector<int> count(256, 0);
        for (char ch : s) {
            count[ch]++;
        }
        priority_queue<pair<int, char>> freq;
        for (int i = 0; i < 256; i++) {
            if (count[i] > 0) {
                freq.push({count[i], char(i)});
            }
        }
        string ans = "";
        while (!freq.empty()) {
            int frequency = freq.top().first;
            char ch = freq.top().second;
            while (frequency--) {
                ans += ch;
            }

            freq.pop();
        }
        return ans;
    }
};