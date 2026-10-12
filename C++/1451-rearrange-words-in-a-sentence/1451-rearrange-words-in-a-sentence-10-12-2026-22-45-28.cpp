class Solution {
public:
    string arrangeWords(string text) {
        vector<pair<int, string>> s;
        int count = 0;
        int start = 0;

        text[0] = tolower(text[0]);

        for (int i = 0; i < text.length(); i++) {
            if (text[i] != ' ') {
                count++;
            } else {
                s.push_back({count, text.substr(start, count)});
                start = i + 1;
                count = 0;
            }
        }
        s.push_back({count, text.substr(start, count)});
        stable_sort(s.begin(), s.end(),
                    [](auto a, auto b) { return a.first < b.first; });
        string ans = "";
        for (auto it : s) {
            if (!ans.empty())
                ans += " ";
            ans += it.second;
        }
        ans[0] = toupper(ans[0]);
        return ans;
    }
};