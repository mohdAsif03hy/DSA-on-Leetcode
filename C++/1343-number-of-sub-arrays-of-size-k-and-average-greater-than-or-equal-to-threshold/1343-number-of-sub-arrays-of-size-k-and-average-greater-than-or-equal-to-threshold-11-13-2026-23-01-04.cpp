
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int count = 0;
        // First window
        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }
        if(sum >= k * threshold) {
            count++;
        }
        // Remaining windows
        for(int i = k; i < arr.size(); i++) {
            sum += arr[i];       // Add new element
            sum -= arr[i - k];   // Remove old element
            if(sum >= k * threshold) {
                count++;
            }
        }
        return count;
    }
};
