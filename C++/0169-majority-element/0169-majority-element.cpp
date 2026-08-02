class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Candidate jo majority ho sakta hai
        int candidate = 0;

        // Candidate ka vote count
        int count = 0;

        // Array ke har element ko traverse karo
        for (int i = 0; i < nums.size(); i++) {

            // Agar count 0 ho gaya to naya candidate choose karo
            if (count == 0) {
                candidate = nums[i];
            }

            // Agar current element candidate ke equal hai
            if (nums[i] == candidate) {
                count++;
            }
            // Warna ek vote cancel kar do
            else {
                count--;
            }
        }

        // Problem guarantee karti hai ki majority element hamesha exist karega
        return candidate;
    }
};