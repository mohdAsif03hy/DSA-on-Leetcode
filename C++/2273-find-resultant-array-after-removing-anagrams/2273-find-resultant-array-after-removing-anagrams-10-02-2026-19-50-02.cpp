class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int i =1;
        while(i < words.size()){
            if(isAnagram(words[i],words[i-1])){
                words.erase(words.begin() + i);
            }else{
                i++;
            }
        }
        return words;
    }
};