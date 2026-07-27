class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max =0;
        int indx = 0;
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
                indx = i;
            }
        }
        int smax = INT_MIN;
        for(int i =0 ;i<nums.size();i++){
            if(i == indx){
                continue;
            }
            if(smax < nums[i]){
                smax = nums[i];
            }
        }
        return (smax -1 ) * (max -1);
    }
};
