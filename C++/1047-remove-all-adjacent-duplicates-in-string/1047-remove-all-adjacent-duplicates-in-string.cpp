class Solution {
public:
    string removeDuplicates(string s) {
        string st = "";
        st.push_back(s[0]);
        for (int i = 1; i < s.length(); i++) {
            if (st.empty() || st.back() != s[i]) {
                st.push_back(s[i]);
            } else {
                st.pop_back();
            }
        }
        return st;
    }
};