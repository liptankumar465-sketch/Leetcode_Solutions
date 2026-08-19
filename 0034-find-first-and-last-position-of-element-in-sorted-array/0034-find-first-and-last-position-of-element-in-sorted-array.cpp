class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;
        int firstIdx = -1, endIdx = -1; // By defult ans

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target) {
                firstIdx = mid;
                hi = mid - 1;
            } else if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        lo = 0, hi = n - 1; // Resotre initial valuess of lo or hi
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target) {
                endIdx = mid;
                lo = mid + 1;
            } else if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return {firstIdx, endIdx};
    }
};