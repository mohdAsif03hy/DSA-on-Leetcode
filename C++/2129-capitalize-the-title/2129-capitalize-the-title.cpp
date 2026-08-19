class Solution {
public:
    string capitalizeTitle(string title) {

        int start = 0;
        int count = 0;

        for (int i = 0; i < title.length(); i++) {
            if (title[i] != ' ') {
                if (title[i] >= 'A' && title[i] <= 'Z') {
                    title[i] = title[i] + 32;
                }
                count++;
            }
            if (title[i] == ' ') {
                if (count >= 3) {
                    title[start] = title[start] - 32;
                }
                start = i + 1;
                count = 0;
            }
        }
        if (count >= 3) {
            title[start] = title[start] - 32;
        }

        return title;
    }
};