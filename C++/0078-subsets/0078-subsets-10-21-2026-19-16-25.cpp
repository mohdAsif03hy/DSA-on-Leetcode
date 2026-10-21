
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int>& nums, int i) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Include element
        temp.push_back(nums[i]);
        solve(nums, i + 1);

        // Backtrack
        temp.pop_back();

        // Exclude element
        solve(nums, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};
