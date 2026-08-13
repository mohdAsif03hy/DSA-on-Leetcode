class Solution {
public:
    string reverseVowels(string s) {
        int start = -1;
        int end = -1;
        int i = 0;
        int j = s.length() - 1;

        while (i <= j) {
            char c = s[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                start = i;
            
            } else{
                i++;
            }
            char d = s[j];
            if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u' ||
                d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U') {
                end = j;
            
            }else{
                j--;
            }
            if (start != -1 && end != -1) {
                swap(s[start], s[end]);
                start = -1;
                end =-1;
                i++;
                j--;
            }
        }

        return s;
    }
};