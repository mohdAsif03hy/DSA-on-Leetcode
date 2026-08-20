class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {

            while (start < end && !isalpha(s[start])) {
                start++;
            }

            while (start < end && !isalpha(s[end])) {
                end--;
            }

            if (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
    }
};