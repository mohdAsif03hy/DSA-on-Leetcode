class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        stack<int> st;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                st.pop();
            }
            else if (operations[i] == "+") {
                int temp = st.top();
                st.pop();
                int temp2 = st.top();
                st.push(temp);
                st.push(temp + temp2);
            }
            else if (operations[i] == "D") {
                int temp = st.top();
                st.push(temp * 2);
            }
            else {
                st.push(stoi(operations[i]));
            }
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};