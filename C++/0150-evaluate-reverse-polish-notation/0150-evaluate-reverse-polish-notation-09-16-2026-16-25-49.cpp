class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" ||
                tokens[i] == "-" ||
                tokens[i] == "*" ||
                tokens[i] == "/") {
                int digit1 = st.top();
                st.pop();
                int digit2 = st.top();
                st.pop();
                int ans = 0;
                if (tokens[i] == "+") {
                    ans = digit2 + digit1;
                }
                else if (tokens[i] == "-") {
                    ans = digit2 - digit1;
                }
                else if (tokens[i] == "*") {
                    ans = digit2 * digit1;
                }
                else {
                    ans = digit2 / digit1;
                }
                st.push(ans);
            }
            else {
                int digit = stoi(tokens[i]);
                st.push(digit);
            }
        }
        return st.top();
    }
};