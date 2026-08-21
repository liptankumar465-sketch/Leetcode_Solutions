class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        int ans = -1; // if target not present in arr -> false ans

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            // if arr left side sorted
            else if (nums[mid] >= nums[0]) {
                if (nums[lo] <= target && nums[mid] >= target) { // condition for left move
                    hi = mid - 1;

                } else { // condition for right move
                    lo = mid + 1;
                }
            // if arr right side sorted
            } else {
                if (nums[mid] <= target && nums[hi] >= target) { // condition for right move
                    lo = mid + 1;
                } else { // condition for left move
                    hi = mid - 1;
                }
            }
        }

        return ans;
    }
};