class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int minPrices = prices[0];

        for (int i = 0; i < n; i++) {
            if (prices[i] < minPrices) {
                minPrices = prices[i];
            } else {
                int currentProfit = prices[i] - minPrices;
                maxProfit = max(currentProfit, maxProfit);
            }
        }

        //------time limit ex---------//
        // int n = prices.size();
        // int maxProfit = 0;

        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         int profit = prices[j] - prices[i];
        //         if (profit > maxProfit) {
        //             maxProfit = profit;
        //         }
        //     }
        // }

        return maxProfit;
    }
};