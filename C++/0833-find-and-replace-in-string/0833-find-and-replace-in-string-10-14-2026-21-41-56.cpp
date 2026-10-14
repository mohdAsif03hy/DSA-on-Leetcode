class Solution {
public:
    string findReplaceString(string s, vector<int>& indices,
                             vector<string>& sources,
                             vector<string>& targets) {
        string ans = s;
        vector<int> order(indices.size());
        for (int i = 0; i < indices.size(); i++) {
            order[i] = i;
        }
        sort(order.begin(), order.end(), [&](int a, int b) {
            return indices[a] > indices[b];
        });

        for (int i : order) {
            int idx = indices[i];
            string src = sources[i];

            if (s.substr(idx, src.size()) == src) {
                ans.replace(idx, src.size(), targets[i]);
            }
        }

        return ans;
    }
};