class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int left = 0; left < n - 1; left++) {

            for (int right = 1; right < n; right++) {

                if (left == right) { // same index elements not allowed
                    right++;
                }
                if (nums[left] + nums[right] == target) {
                    return {left, right};
                }
            }
        }
        return {};
    }
};