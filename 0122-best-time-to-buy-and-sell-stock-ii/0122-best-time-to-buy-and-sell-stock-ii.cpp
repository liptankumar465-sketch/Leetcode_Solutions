class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 7 1 5 3 6 4
        //         i
        //------------
        // maxpro = (5-1)+(6-3) = 4+3=7

        int maxProfit = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i] < prices[i + 1]) {
                maxProfit = maxProfit + prices[i + 1] - prices[i];
            }
        }

        return maxProfit;
    }
};