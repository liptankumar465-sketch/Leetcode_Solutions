class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // squares of nums element.
        for (int i = 0; i < nums.size(); i++) {
            nums[i] *= nums[i];
        }
        // the sort in non-decreasing order.
        sort(nums.begin(), nums.end());

        return nums;
    }
};