class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        int result = nums.size();

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                result = mid;
                break;
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                result = mid;
                hi = mid - 1;
            }
        }

        return result;

        // //--------brut force---------//
        // int result = nums.size();
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] >= target) {
        //         result = i;
        //         break;
        //     }
        // }

        // return result;
    }
};