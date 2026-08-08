class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int temp = 0;
        int secmax = 0;
        int index = 0;

        for (int j = 0; j < nums.size(); j++) {

            if (temp < nums[j]) {
                secmax = temp;
                temp = nums[j];
                index = j;
            }
            else if (secmax < nums[j]) {
                secmax = nums[j];
            }
        }

        if (secmax * 2 <= temp) {
            return index;
        }

        return -1;
    }
};