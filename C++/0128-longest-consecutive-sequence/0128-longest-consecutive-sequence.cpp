class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0;

        for (int el : st) {

            // Sequence ka starting point
            if (st.count(el - 1) == 0) {

                int count = 1;
                int next = el + 1;

                // Puri consecutive sequence count karo
                while (st.count(next)) {
                    count++;
                    next++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};