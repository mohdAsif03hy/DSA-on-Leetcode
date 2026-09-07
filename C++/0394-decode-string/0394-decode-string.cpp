class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch != ']') {
                st.push(ch);
            }
            else {
                // bracket ke andar ka string nikalo
                string str = "";
                while (!st.empty() && st.top() != '[') {
                    str += st.top();
                    st.pop();
                }
                // '[' remove
                st.pop();
                // digit nikalo
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num += st.top();
                    st.pop();
                }
                reverse(str.begin(), str.end());
                reverse(num.begin(), num.end());
                int times = stoi(num);
                // repeat
                string temp = "";
                for (int i = 0; i < times; i++) {
                    temp += str;
                }
                // result wapas stack me push
                for (char c : temp) {
                    st.push(c);
                }
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};