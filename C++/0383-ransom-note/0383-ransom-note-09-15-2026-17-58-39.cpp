class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> st;
        for (char c : magazine) {
            st[c]++;
        }
        for (int i = 0; i < ransomNote.length(); i++) {
            if (st[ransomNote[i]] == 0) {
                return false;
            }

            st[ransomNote[i]]--;
        }

        return true;
    }
};