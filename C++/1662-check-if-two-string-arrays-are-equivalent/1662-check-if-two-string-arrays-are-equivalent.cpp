class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0;
        int j = 0;
        string ans1 = "";
        string ans2 = "";

        while (i < word1.size() || j < word2.size()) {

            if (i < word1.size()) {
                ans1 += word1[i];
                i++;
            }

            if (j < word2.size()) {
                ans2 += word2[j];
                j++;
            }
        }

        if (ans1.length() == ans2.length()) {
            int k = 0;
            int l = 0;
            while (k < ans1.length() && l < ans2.length()) {
                if (ans1[k] == ans2[l]) {
                    k++;
                    l++;
                    continue;

                } else {
                    return false;
                }
            }

        } else {
            return false;
        }
        return true;
    }
};