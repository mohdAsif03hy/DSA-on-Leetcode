class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        function<void(int, int)> mergeSort = [&](int low, int high) {

            if (low >= high)
                return;

            int mid = low + (high - low) / 2;

            mergeSort(low, mid);
            mergeSort(mid + 1, high);

            vector<int> temp;
            int i = low;
            int j = mid + 1;

            while (i <= mid && j <= high) {
                if (nums[i] <= nums[j]) {
                    temp.push_back(nums[i++]);
                } else {
                    temp.push_back(nums[j++]);
                }
            }

            while (i <= mid)
                temp.push_back(nums[i++]);

            while (j <= high)
                temp.push_back(nums[j++]);

            for (int k = 0; k < temp.size(); k++)
                nums[low + k] = temp[k];
        };

        mergeSort(0, nums.size() - 1);

        return nums;
    }
};