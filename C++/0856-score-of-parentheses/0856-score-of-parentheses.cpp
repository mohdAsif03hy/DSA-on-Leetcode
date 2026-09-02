class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> ans;
        ans.push(0);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                ans.push(0);
            }
            else {
                int inner = ans.top();
                ans.pop();
                int score = (inner == 0) ? 1 : 2 * inner;
                ans.top() += score;
            }
        }
        return ans.top();
    }
};