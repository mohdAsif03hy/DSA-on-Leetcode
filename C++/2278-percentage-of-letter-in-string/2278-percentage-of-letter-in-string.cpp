class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (s[i] == letter) {
                count++;
            }
        }

        int result = (count * 100) / n;

        return result;
    }
};