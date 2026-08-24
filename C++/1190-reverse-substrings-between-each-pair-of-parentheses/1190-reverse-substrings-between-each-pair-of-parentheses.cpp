class Solution {
public:
    string reverseParentheses(string s) {

        int n = s.length();

        // Matching parentheses find karne ke liye
        vector<int> pair(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {

            if (s[i] == '(') {
                st.push(i);
            }

            else if (s[i] == ')') {
                int open = st.top();
                st.pop();

                pair[i] = open;
                pair[open] = i;
            }
        }

        string ans = "";

        int i = 0;
        int direction = 1;

        while (i < n) {

            if (s[i] == '(' || s[i] == ')') {

                i = pair[i];

                direction = -direction;
            }

            else {
                ans += s[i];
            }

            i += direction;
        }

        return ans;
    }
};