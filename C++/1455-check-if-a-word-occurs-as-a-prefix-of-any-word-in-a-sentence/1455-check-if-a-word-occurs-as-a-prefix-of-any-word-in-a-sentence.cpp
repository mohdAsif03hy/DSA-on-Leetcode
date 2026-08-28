class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i = 0;
        int word = 1;
        int n = sentence.size();
        int m = searchWord.size();
        while (i < n) {
            // current word ka starting index
            int start = i;
            // current word ke characters compare karo
            int j = 0;
            while (i < n && sentence[i] != ' ' && j < m) {
                if (sentence[i] != searchWord[j])
                    break;

                i++;
                j++;
            }
            // poora searchWord match ho gaya
            if (j == m)
                return word;
            // current word ke end tak skip
            while (i < n && sentence[i] != ' ')
                i++;
            // space skip karo
            if (i < n) {
                i++;
                word++;
            }
        }
        return -1;
    }
};