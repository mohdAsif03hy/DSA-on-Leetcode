class Solution {
public:
    bool isValid(string word) {

        if (word.length() < 3)
            return false;

        int vowel = 0;
        int consonant = 0;

        for (int i = 0; i < word.length(); i++) {

            // Special character check
            if (!isalnum(word[i])) {
                return false;
            }

            // Vowel
            if (word[i] == 'a' || word[i] == 'e' ||
                word[i] == 'i' || word[i] == 'o' ||
                word[i] == 'u' ||
                word[i] == 'A' || word[i] == 'E' ||
                word[i] == 'I' || word[i] == 'O' ||
                word[i] == 'U') {

                vowel++;
            }

            // Consonant
            else if (isalpha(word[i])) {
                consonant++;
            }
        }

        return vowel > 0 && consonant > 0;
    }
};