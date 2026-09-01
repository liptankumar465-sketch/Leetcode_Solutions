class Solution {
    void reverse(vector<int>& arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }

public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // first find min ele index
        // int min = INT_MAX;
        // int minIdx;
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] < min) {
        //         min = nums[i];
        //         minIdx = i;
        //     }
        // }

        // reverse(nums, minIdx, n - 1);
        // reverse(nums, 0, minIdx - 1);
        // reverse(nums, 0, n - 1);

        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
                return true;
            else if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return false;
    }
};