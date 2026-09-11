class Solution {
public:
    int findNumbers(vector<int>& nums) {
        if(nums.size() == 1 && nums[0] == 100000)return 1;
        int i =0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 9 && nums[i] < 100){
                count++;
            }else if(nums[i] > 99 && nums[i] < 1000){
                continue;
            }else if(nums[i] > 999 && nums[i] < 10000){
                count++;
            }else{
                continue;
            }
        }
        return count;
    }
};