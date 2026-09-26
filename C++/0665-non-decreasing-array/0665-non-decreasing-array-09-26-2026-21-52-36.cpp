class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() < 3) {
            return true;
        }

        for(int i = 0; i < nums.size() - 1; i++) {

            if(nums[i] > nums[i + 1]) {

                // i = last pair nahi hai
                if(i + 2 < nums.size()) {

                    if(i == 0 || nums[i - 1] <= nums[i + 1]) {
                        nums[i] = nums[i + 1];
                    }
                    else {
                        nums[i + 1] = nums[i];
                    }

                }
                // last pair
                else {

                    if(i == 0 || nums[i - 1] <= nums[i + 1]) {
                        nums[i] = nums[i + 1];
                    }
                    else {
                        nums[i + 1] = nums[i];
                    }
                }
                break;
            }
        }
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};