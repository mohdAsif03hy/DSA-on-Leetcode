class Solution {
public:

    // Reverse function without STL
    void reverseArray(vector<int>& nums, int start, int end)
    {
        while (start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;

            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();

        // Handle cases where k > n
        k = k % n;

        // Step 1: Reverse the entire array
        reverseArray(nums, 0, n - 1);

        // Step 2: Reverse first k elements
        reverseArray(nums, 0, k - 1);

        // Step 3: Reverse remaining elements
        reverseArray(nums, k, n - 1);
    }
};