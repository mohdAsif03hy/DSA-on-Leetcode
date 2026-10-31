class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<int>freq;
        for(int i =0;i<nums.size()-1;i++){
            if(!freq.count(nums[i] + nums[i+1])){
                freq.insert(nums[i]+nums[i+1]);
            }else{
                return true;
            }
        }
        return false;
    }
};