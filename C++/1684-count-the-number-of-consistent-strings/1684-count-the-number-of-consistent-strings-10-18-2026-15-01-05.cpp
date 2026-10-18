class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        for (int j = 0; j < words.size(); j++) {
            string temp = words[j];
            for (int i = 0; i < temp.length(); i++) {
                if (!allowed.contains(temp[i])) {
                    break;
                }
                if (i + 1 == temp.length()) {
                    ans++;
                }
            }
        }

        return ans;
    }
};