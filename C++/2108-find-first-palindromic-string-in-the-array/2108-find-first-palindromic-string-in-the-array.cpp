class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size() / 2; i++) {
            if (tolower(s[i]) != tolower(s[s.size() - 1 - i])) {
                return false;
            }
        }

        return true;
    }

    string firstPalindrome(vector<string>& words) {
        string ans = "";

        for (int i = 0; i < words.size(); i++) {
            if (isPalindrome(words[i])) {
                return words[i];
            }
        }

        return "";
    }
};