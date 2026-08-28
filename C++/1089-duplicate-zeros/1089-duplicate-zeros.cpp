class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        // Count zeros
        int zeros = 0;
        for (int x : arr) {
            if (x == 0)
                zeros++;
        }
        // i = original array ka last index
        int i = n - 1;
        // j = conceptual expanded array ka last index
        int j = n + zeros - 1;
        // Right -> Left
        while (i >= 0) {
            // Agar j actual array ke andar hai,
            // tabhi value write karni hai
            if (j < n) {
                arr[j] = arr[i];
            }
            // Agar current element zero hai,
            // to zero ko duplicate karna hai
            if (arr[i] == 0) {
                j--;
                if (j < n) {
                    arr[j] = 0;
                }
            }
            i--;
            j--;
        }
    }
};