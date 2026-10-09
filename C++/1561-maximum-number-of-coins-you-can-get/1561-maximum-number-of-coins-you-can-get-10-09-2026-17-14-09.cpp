class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int j = piles.size() - 1;
        int rounds = piles.size() / 3;
        int ans = 0;
        while (rounds > 0) {
            ans += piles[j - 1];
            j -= 2;
            rounds--;
        }
        return ans;
    }
};