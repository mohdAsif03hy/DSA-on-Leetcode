class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[i] == nums[j]) {
        //             count++;
        //         }
        //     }
        // }
        
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        int count = 0;
        for (auto &p : freq) {
            int f = p.second;
            count += (f * (f - 1)) / 2;
        }
        return count;
    }
};