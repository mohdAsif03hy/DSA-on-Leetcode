class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) { return a[0] < b[0]; }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),compare);

        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        for (int j = 1; j < intervals.size(); j++) {

            if (ans.back()[1] >= intervals[j][0]) {

                ans.back()[1] = max(ans.back()[1], intervals[j][1]);

            } else {

                ans.push_back(intervals[j]);
            }
        }
        return ans;
    }
};