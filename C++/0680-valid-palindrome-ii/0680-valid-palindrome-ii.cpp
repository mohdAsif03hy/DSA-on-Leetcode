class Solution {
public:
    bool isPal(string s, int i , int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return isPal(s,i+1,j) || isPal(s,i,j-1);
            }
        }
        return true;
    }
};