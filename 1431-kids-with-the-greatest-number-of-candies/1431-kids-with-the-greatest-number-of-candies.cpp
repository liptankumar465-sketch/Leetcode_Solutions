class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Find out the greatest number of candies among all the kids.
        int maxCandies = 0;
        for (int candy : candies) {
            maxCandies = max(candy, maxCandies);
        }
        // For each kid, check if they will have greatest number of candies
        // among all the kids.
        vector<bool> result;
        for (int candy : candies) {
            result.push_back(candy + extraCandies >= maxCandies);
            // if condition true than push -> true
            // if condition false than push -> false
        }

        return result;

        ////-----------brute force-------------//
        // find maxCandies
        // int maxCandies = candies[0];
        // for (int i = 0; i < candies.size(); i++) {
        //     if (candies[i] > maxCandies) {
        //         maxCandies = candies[i];
        //     }
        // }

        // vector<bool> ans;
        // for (int i = 0; i < candies.size(); i++) {
        //     if (candies[i] + extraCandies < maxCandies) {
        //         ans.push_back(false);
        //     } else {
        //         ans.push_back(true);
        //     }
        // }

        // return ans;
    }
};