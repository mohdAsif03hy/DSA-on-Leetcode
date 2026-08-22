class Solution {
public:
    string licenseKeyFormatting(string s, int k) {

        string ans = "";
        string ans2 = "";

        // Step 1: Remove '-' and convert to uppercase
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '-') {
                continue;
            }

            ans += toupper(s[i]);
        }

        // Step 2: Find first group size
        int fgs = ans.length() % k;

        // If perfectly divisible, first group has k characters
        if (fgs == 0) {
            fgs = k;
        }

        // Step 3: Add first group
        ans2 += ans.substr(0, fgs);

        // Step 4: Remaining groups
        int start = fgs;

        while (start < ans.length()) {

            ans2 += '-';

            ans2 += ans.substr(start, k);

            start += k;
        }

        return ans2;
    }
};