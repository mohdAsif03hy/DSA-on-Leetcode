class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int gap =0 ;
        int minAttack =0;
        for(int i=0;i<timeSeries.size()-1;i++){
            gap = (timeSeries[i+1] - timeSeries[i]);
             minAttack += min(duration,gap);
        }
        return minAttack+duration;
    }
};