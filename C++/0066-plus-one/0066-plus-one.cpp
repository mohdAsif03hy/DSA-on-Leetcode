class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        // Right se left traverse
        for (int i = n - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // Agar 9 hai to 0 bana do
            digits[i] = 0;
        }

        // Agar saare digits 9 the
        vector<int> ans;
        ans.push_back(1);

        for (int i = 0; i < n; i++) {
            ans.push_back(digits[i]);
        }

        return ans;
    }
};