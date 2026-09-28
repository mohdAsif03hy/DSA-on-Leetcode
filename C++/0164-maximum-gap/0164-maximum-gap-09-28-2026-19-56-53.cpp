class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int gap =0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int temp  =abs(nums[i+1] - nums[i]);
            gap = max(gap,temp);
        }
        return gap;
    }
};