class Solution {
    // // squares of nums element.
    // for (int i = 0; i < nums.size(); i++) {
    //     nums[i] *= nums[i];
    // }
    // // the sort in non-decreasing order.
    // sort(nums.begin(), nums.end());

    // return nums;

    //--------dry run------------//
    // nums = -4, -1, 0, 3, 10, len = 5
    //         i  i   j/ij   j
    // res = [ ,1 ,9, 16, 100], len = 5
    //        k  k  k   k    k
    // 1. abs[j] > abs[i], k = abs[j], j--, k--
    // 2. abs[i] > abs[j], k = abs[i], i++, k--
    // 3. abs[j] > abs[i], k = abs[j], j--, k--
    // 4. abs[i] > abs[j], k = abs[i], i++, k--
    // 5. abs[i] == abs[j], k = abs[i], retrun
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        vector<int> result(nums.size());

        for (int k = nums.size() - 1; k >= 0; k--) {
            if (abs(nums[i]) > abs(nums[j])) {
                result[k] = nums[i] * nums[i];
                i++;
            } else {
                result[k] = nums[j] * nums[j];
                j--;
            }
        }

        return result;
    }
};