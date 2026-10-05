class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums)
            freq[x]++;

        for (int x : nums) {
            if (freq[x] == 1 && x % 2 == 0)
                return x;
        }

        return -1;
    }
};