class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        vector<int> freq(121, 0);
        for(int i = 0; i < ages.size(); i++) {
            freq[ages[i]]++;
        }
        int count = 0;
        for(int i = 1; i <= 120; i++) {
            for(int j = 1; j <= 120; j++) {
                if(freq[i] == 0 || freq[j] == 0)
                    continue;
                if(j <= 0.5 * i + 7)
                    continue;
                if(j > i)
                    continue;
                if(j > 100 && i < 100)
                    continue;
                if(i == j)
                    count += freq[i] * (freq[i] - 1);
                else
                    count += freq[i] * freq[j];
            }
        }
        return count;
    }
};