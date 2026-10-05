class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int count = 0;
        while (true) {
            int temp = 0;
            for (int i = 0; i < target.length(); i++) {
                char ch = target[i];
                if (s.find(ch) != string::npos) {
                    int idx = s.find(ch);
                    s[idx] = ' ';
                    temp++;
                } else {
                    return count;
                }
            }
            if (temp == target.length()) {
                count++;
            }
        }
        return count;
    }
};