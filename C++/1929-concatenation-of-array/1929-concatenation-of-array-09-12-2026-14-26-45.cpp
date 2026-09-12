class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i =0;i<n*2;i++){
            ans.push_back(nums[i%n]);
        }
        return ans;
    }
};