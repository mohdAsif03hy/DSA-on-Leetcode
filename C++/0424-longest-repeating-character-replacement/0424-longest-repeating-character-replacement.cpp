class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int j = 0;
        int freq[26] = {0};
        int maxFreq = 0;
        int ans = 0;
        while (j < s.length()) {
            // Right character ko window mein add karo
            freq[s[j] - 'A']++;
            maxFreq = max(maxFreq, freq[s[j] - 'A']);
            int windowSize = j - i + 1;
            // Window invalid hai
            while (windowSize - maxFreq > k) {
                freq[s[i] - 'A']--;
                i++;
                windowSize = j - i + 1;
            }
            // Valid window
            ans = max(ans, windowSize);
            j++;
        }

        return ans;
    }
};