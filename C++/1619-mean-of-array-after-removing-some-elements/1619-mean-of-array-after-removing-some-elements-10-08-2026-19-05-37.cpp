class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        double left = (n * 5) / 100;
        double right = (n * 5) / 100;
        double sum = 0;
        double count = 0;
        int start = left;
        int end = n - right - 1;
         while (start <= end) {
            sum += arr[start];
            start++;
            count++;
        }
        return sum / count;
    }
};