class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int maxProfit = 0;
        int minPrices = prices[0];

        for (int i = 0; i < n; i++) {
            if (prices[i] < minPrices) {
                minPrices = prices[i];
            } else {
                int currProfit = prices[i] - minPrices;
                if (currProfit > maxProfit)
                    maxProfit = currProfit;
            }
        }

        return maxProfit;
    }
}