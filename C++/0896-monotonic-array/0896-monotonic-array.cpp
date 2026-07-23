class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int j =0;
        int n = nums.size();
        if(n==1){
            return true;
        }else{
        for(int i=1;i<n;i++){
            if(nums[j] <= nums[i] ){
                j++;
            }else{
                j =0;
            break;
            }
        }
        if(j!=0){
            return true;
        }else{
            j =0 ;
        }
        for(int i=1;i<n;i++){
            if(nums[j] >= nums[i]){
                j++;
            }else{
            return false;
            }
        }
        return true;
    }
    }
};