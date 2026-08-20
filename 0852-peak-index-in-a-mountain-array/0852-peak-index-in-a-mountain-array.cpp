class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0, hi = arr.size() - 1, ans = -1;

        while (lo <= hi) {
            int mid = hi + (lo - hi) / 2; // this is another way to find mid
            // this is not pass runtime error
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            // right side move condition
            else if (arr[mid] < arr[mid + 1]) {
                ans = mid;
                lo = mid + 1;
            }
            // left  side move condition
            else
                hi = mid - 1;
        }

        return ans;

        // //-----------brute force--------------//
        // int peck_element = INT_MIN;
        // int ans = -1;

        // for (int peck_index = 0; peck_index < arr.size(); peck_index++) {
        //     if (arr[peck_index] > peck_element) {
        //         peck_element = arr[peck_index];
        //         ans = peck_index;
        //     }
        // }

        // return ans;
    }
};