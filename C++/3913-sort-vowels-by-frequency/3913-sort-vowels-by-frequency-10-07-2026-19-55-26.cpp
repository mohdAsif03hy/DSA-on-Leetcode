class Solution {
public:

    static bool compare(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0])
            return a[1] < b[1];

        return a[0] > b[0];
    }

    string sortVowels(string s) {
        string vowel = "aeiou";
        // count[i] = {frequency, first occurrence, vowel index}
        vector<vector<int>> count(5, {0, -1, 0});
        // vowel index
        for (int i = 0; i < 5; i++) {
            count[i][2] = i;
        }
        // frequency + first occurrence
        for (int i = 0; i < s.length(); i++) {
            int pos = vowel.find(s[i]);
            if (pos != string::npos) {
                count[pos][0]++;
                if (count[pos][1] == -1)
                    count[pos][1] = i;
            }
        }

        // frequency descending
        // same frequency -> first occurrence ascending
        sort(count.begin(), count.end(), compare);
        // sorted vowels ko string mein put karo
        int j = 0;

        for (int i = 0; i < s.length(); i++) {
            if (vowel.find(s[i]) != string::npos) {
                while (j < 5 && count[j][0] == 0)
                    j++;
                if (j == 5)
                    break;
                s[i] = vowel[count[j][2]];
                count[j][0]--;
            }
        }
        return s;
    }
};