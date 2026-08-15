class Solution {
public:

    int isJeweler(char ch, string stones) {
        int count = 0;

        for (int i = 0; i < stones.length(); i++) {
            if (stones[i] == ch) {
                count++;
            }
        }

        return count;
    }

    int numJewelsInStones(string jewels, string stones) {

        int count = 0;

        for (int i = 0; i < jewels.length(); i++) {
            count += isJeweler(jewels[i], stones);
        }

        return count;
    }
};