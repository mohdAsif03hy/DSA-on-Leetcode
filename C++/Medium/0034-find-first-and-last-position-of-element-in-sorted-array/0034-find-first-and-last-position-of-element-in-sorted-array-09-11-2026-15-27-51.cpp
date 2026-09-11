class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int st = 0;
        int end = nums.size() - 1;
        int first = -1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) {
                first = mid;
                // target mil gaya,
                // lekin aur left mein ho sakta hai
                end = mid - 1;
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        ans.push_back(first);
        
        st = 0;
        end = nums.size() - 1;
        int last = -1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) {
                last = mid;
                // target mil gaya,
                // lekin aur right mein ho sakta hai
                st = mid + 1;
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        ans.push_back(last);
        return ans;
    }
};