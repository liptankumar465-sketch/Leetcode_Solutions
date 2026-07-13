class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int max_wealth = INT_MIN;
        for (const auto& costomer : accounts) {
            int costomer_wealth = 0;
            for (int bank : costomer) {
                costomer_wealth += bank;
            }
            max_wealth = max(costomer_wealth, max_wealth);
        }
        return max_wealth;
    }
};