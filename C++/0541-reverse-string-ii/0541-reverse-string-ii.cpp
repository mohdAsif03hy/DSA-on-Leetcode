class Solution {
public:
    string reverseStr(string s, int k) {

        int count = 2;
        int start = 0;
        int end = 0;

        // Complete 2k blocks
        for (int i = 0; i < s.size() && count * k <= s.size(); i++) {

            if (i == count * k) {

                // First k characters of current 2k block
                start = i - 2 * k;
                end = i - k - 1;

                while (start < end) {
                    swap(s[start], s[end]);
                    start++;
                    end--;
                }

                count += 2;
            }
        }

        // Remaining characters
        int i = s.size() - 1;

        start = (count - 2) * k;

        if (i - start + 1 >= k) {
            end = start + k - 1;
        }
        else {
            end = i;
        }

        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }

        return s;
    }
};