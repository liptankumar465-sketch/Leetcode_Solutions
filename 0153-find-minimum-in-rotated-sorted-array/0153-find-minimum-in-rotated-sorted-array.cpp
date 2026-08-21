class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1;
        int ans = nums[0];
        // if arr is allredy sorted
        if (nums[0] < nums[hi])
        return ans;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            // if arr left side sorted -> move right
            if (nums[mid] >= nums[0]) {
                lo = mid +  1;
            }
            // if arr right side sorted -> move left 
            else {
                ans = nums[mid];
                hi = mid - 1;
            }
        }

        return ans;

        // //---------brute force----------//
        // int minEle = INT_MAX;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] < minEle) {
        //         minEle = nums[i];
        //     }
        // }

        // return minEle;
    }
};