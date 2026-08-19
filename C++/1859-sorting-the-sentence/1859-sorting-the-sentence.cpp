class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        int start = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                start = i + 1;
            }
            if (isdigit(s[i])) {
                ans[s[i] - '0' - 1] = s.substr(start, i - start);
            }
        }
        string result = "";
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != "") {
                result += ans[i] + " ";
            }
        }
        result.pop_back();
        return result;
    }
};