class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        // Frequency count
        for (int n : nums) {
            freq[n]++;
        }
        // Max Heap: {frequency, number}
        priority_queue<pair<int, int>> st;
        for (auto i : freq) {
            st.push({i.second, i.first});
        }
        vector<int> ans;
        // Top k frequent elements
        for (int i = 0; i < k; i++) {
            ans.push_back(st.top().second);
            st.pop();
        }
        return ans;
    }
};