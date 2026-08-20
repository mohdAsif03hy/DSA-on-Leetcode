class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1 = "";
        string ans2 = "";
        int i = 0;
        int j = 0;
        while (i < s.length() || j < t.length()) {

            if (i < s.length() && s[i] == '#') {
                if (!ans1.empty()) {
                    ans1.pop_back();
                }
                i++;
            } else if (i < s.length()) {
                ans1 += s[i];
                i++;
            }

            if (j < t.length() && t[j] == '#') {
                if (!ans2.empty()) {
                    ans2.pop_back();
                }
                j++;
            } else if (j < t.length()) {
                ans2 += t[j];
                j++;
            }
        }

        return ans1 == ans2;
    }
};