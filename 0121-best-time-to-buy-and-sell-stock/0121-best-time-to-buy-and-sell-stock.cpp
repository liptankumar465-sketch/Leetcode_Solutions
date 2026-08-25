class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 7 1 5 3 6 4
        //           p
        //--------------
        // minpro = 7,1
        // maxpro = 0,4,5

        int minProfit = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minProfit) {
                minProfit = price;
            }
            if (price - minProfit > maxProfit) {
                maxProfit = price - minProfit;
            }
        }

        return maxProfit;

        // int n = prices.size();
        // int maxProfit = 0;
        // int minPrices = prices[0];

        // for (int i = 0; i < n; i++) {
        //     if (prices[i] < minPrices) {
        //         minPrices = prices[i];
        //     } else {
        //         int currentProfit = prices[i] - minPrices;
        //         maxProfit = max(currentProfit, maxProfit);
        //     }
        // }

        // return maxProfit;

        //------brute force---------//
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

        // return maxProfit;
    }
};