class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) {

            // Aaj sell karne par kitna profit hoga?
            int profit = prices[i] - minPrice;

            // Best profit update
            if(profit > maxProfit) {
                maxProfit = profit;
            }

            // Future ke liye cheapest buying price update
            if(prices[i] < minPrice) {
                minPrice = prices[i];
            }
        }

        return maxProfit;
    }
};