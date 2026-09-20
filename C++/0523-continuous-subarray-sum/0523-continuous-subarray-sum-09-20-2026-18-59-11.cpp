class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int reminder = 0;
        mp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            reminder =( nums[i] + reminder)  % k;
            if (mp.find(reminder) != mp.end()) {
                if(i - mp[reminder] >= 2){
                return true;
                }
            } else {
                mp[reminder] = i;
            }
        }
        return false;
    }
};