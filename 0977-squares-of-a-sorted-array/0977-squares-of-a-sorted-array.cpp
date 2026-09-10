class Solution {
    // // squares of nums element.
    // for (int i = 0; i < nums.size(); i++) {
    //     nums[i] *= nums[i];
    // }
    // // the sort in non-decreasing order.
    // sort(nums.begin(), nums.end());

    // return nums;
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;

        vector<int> result(n);
        int i = n - 1;

        while (l <= r) {
            int left_val = nums[l] * nums[l];
            int right_val = nums[r] * nums[r];
            if (left_val > right_val) {
                result[i] = left_val;
                l++;
                i--;
            } else {
                result[i] = right_val;
                r--;
                i--;
            }
        }

        return result;
    }
};