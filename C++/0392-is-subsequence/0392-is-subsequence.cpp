class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i =0;
        int j =0;
        int count =0;
        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        if(count == s.length()){
            return true;
        }else{
            return false;
        }
    }
};