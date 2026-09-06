
class Solution {
public:
    string removeDuplicateLetters(string s) {
        string result;
        int n = s.length();
        vector<bool> taken(26, false);
        vector<int> lastIndex(26);
        // Har character ka last occurrence store karo
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            lastIndex[ch - 'a'] = i;
        }
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            int idx = ch - 'a';
            // Character already result me hai
            if (taken[idx] == true) {
                continue;
            }
            // Previous bigger character ko remove karo
            // agar wo future me dobara aa sakta hai
            while (!result.empty() &&
                   result.back() > ch &&
                   lastIndex[result.back() - 'a'] > i) {
                taken[result.back() - 'a'] = false;
                result.pop_back();
            }
            result.push_back(ch);
            taken[idx] = true;
        }
        return result;
    }
};

