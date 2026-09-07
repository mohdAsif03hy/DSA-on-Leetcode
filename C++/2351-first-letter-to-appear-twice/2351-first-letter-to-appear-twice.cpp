class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> taken(26, false);
        for (char ch : s) {
            if(taken[ch - 'a']){
                return ch;
            }
            taken[ch-'a'] = true;
        }
        return '\0';
    }
};