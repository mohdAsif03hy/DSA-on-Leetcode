class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>ans;
        priority_queue<int>pq;
        for(int i : candies){
            pq.push(i);
        }
        for(int i =0;i<candies.size();i++){
            if(candies[i] + extraCandies < pq.top()){
                 ans.push_back(false);
            }else{
                ans.push_back(true);
            }
        }
        return ans;
    }
};