class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (freq[nums[i]] >=2){
                ans.push_back(nums[i]);
                freq[nums[i]] = 0;
            }
        }
        return ans;
    }
};