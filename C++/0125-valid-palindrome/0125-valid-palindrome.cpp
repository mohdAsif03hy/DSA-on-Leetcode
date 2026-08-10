class Solution {
public:
    bool isPalindrome(string s) {
        s = regex_replace(s, regex("[^a-zA-Z0-9]"), "");
        for(int i =0;i<s.size()/2;i++){
            if(tolower(s[i]) != tolower(s[s.size()-1-i])){
                return false;
            }
        }
        return true;
    }
};