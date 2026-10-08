class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0;
        int count = 0;
        for(int i =0;i<s.length();i++){
            if(s[i] == '('){
                count++;
                continue;

            }
            if(s[i] == ')' && count > 0){
                count--;
                continue;
            }
             if(s[i] == ')' && count == 0){
                ans++;
                continue;

            }
        }
        return ans+count;
    }
};