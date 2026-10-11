class Solution {
public:
    bool match(string str, string pat) {
        int i = 0, j = 0;
        while (i < str.length()) {
            if (j < pat.length() && str[i] == pat[j]) {
                i++;
                j++;
            }
            else if (isupper(str[i])) {
                return false;
            }
            else {
                i++;
            }
        }
        return j == pat.length();
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for (int i = 0; i < queries.size(); i++) {
            ans.push_back(match(queries[i], pattern));
        }

        return ans;
    }
};