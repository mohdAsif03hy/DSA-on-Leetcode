class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        int flag = 0;
        for (int i = 0; i < word.length(); i++) {
            if (char(word[i]) >= 97 && char(word[i]) <= 122) {
                flag++;
            } else {
                count++;
            }
        }
        if (count == word.length()) {
            return true;
        } else if (flag == word.length()) {
            return true;
        } else if (count == 1 && (word[0] >= 64 && word[0] < 97)) {
            ;
            return true;
        } else {
            return false;
        }
    }
};