class Solution {
public:
    int summax(vector<int>arr){
    int max = 0;
        for(int i : arr){
            max+=i;
        }
        return max;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i =0;i<accounts.size();i++){
            ans = max(ans,summax(accounts[i]));
        }
        return ans;
    }
};