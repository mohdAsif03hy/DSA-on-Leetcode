class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        stack<pair<int, int>> st;
        vector<int> finalans(temperatures.size(), 0);
        st.push({0, temperatures[0]});
        for (int i = 1; i < temperatures.size(); i++) {
            while (!st.empty() && temperatures[i] > st.top().second) {
                pair<int, int> temp = st.top();
                st.pop();
                finalans[temp.first] = i - temp.first;
            }
            st.push({i, temperatures[i]});
        }
        return finalans;
    }
};