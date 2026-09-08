class Solution {
public:
     bool isIsomorphic(string s, string t) {
        char mapST[256] = {};
        char mapTS[256] = {};
        for (int i = 0; i < s.length(); i++) {
            if (mapST[s[i]] != 0 && mapST[s[i]] != t[i]) {
                return false;
            }
            if (mapTS[t[i]] != 0 && mapTS[t[i]] != s[i]) {
                return false;
            }
            mapST[s[i]] = t[i];
            mapTS[t[i]] = s[i];
        }

        return true;
     }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            if(isIsomorphic(words[i],pattern)){
                ans.push_back(words[i]);
            }else{
                continue;
            }
        }
        return ans;
    }
};