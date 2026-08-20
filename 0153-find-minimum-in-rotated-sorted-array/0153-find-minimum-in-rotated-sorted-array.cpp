class Solution {
public:
    int findMin(vector<int>& nums) {

        //---------brute force----------//
        int minEle = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < minEle) {
                minEle = nums[i];
            }
        }

        return minEle;
    }
};