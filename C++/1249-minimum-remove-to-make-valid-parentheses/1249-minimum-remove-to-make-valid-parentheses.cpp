class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans = "";
        int count = 0;
        // Step 1: Extra ')' remove
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                count++;
            if (s[i] == ')')
                count--;
            if (count < 0) {
                count = 0;
                continue;
            }
            ans.push_back(s[i]);
        }
        // count = extra '('
        string result = "";
        // Step 2: Extra '(' skip karo
        for (int i = ans.length() - 1; i >= 0; i--) {
            if (ans[i] == '(' && count > 0) {
                count--;
                continue;
            }
            result.push_back(ans[i]);
        }
        // Reverse because second pass right -> left tha
        reverse(result.begin(), result.end());
        return result;
    }
};