class Solution {
public:
    bool isValid(string s) {
        string st = "";
        for (char ch : s) {
            st.push_back(ch);
            if (st.size() >= 3 &&
                st[st.size() - 3] == 'a' &&
                st[st.size() - 2] == 'b' &&
                st[st.size() - 1] == 'c') {
                st.pop_back();
                st.pop_back();
                st.pop_back();
            }
        }
        return st.empty();
    }
};