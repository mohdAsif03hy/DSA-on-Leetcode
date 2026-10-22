class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        string s = "0123456789abcdef";
        string ans = "";
        unsigned int n = num;

        while (n > 0) {
            ans = s[n % 16] + ans;
            n = n / 16;
        }

        return ans;
    }
};