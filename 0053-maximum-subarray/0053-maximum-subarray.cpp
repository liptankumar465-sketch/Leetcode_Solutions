class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sz = nums.size();
        int max_count = INT_MIN;
        int curr_count = 0;

        for (int val : nums) {
            curr_count += val;
            max_count = max(curr_count, max_count);
            if (curr_count < 0) {
                curr_count = 0;
            }
        }
        return max_count;
    }
};