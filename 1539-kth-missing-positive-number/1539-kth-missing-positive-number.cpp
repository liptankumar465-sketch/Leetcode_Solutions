class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lo = 0, hi = arr.size() - 1;
        int ans = arr.size(); // if arr is allredy sorted and no missing no presents
        /*
           ( arr[i] - i - 1 ) -> this finds numbers of missing no.
           ( ans + k ) -> return Kth missing no.
        */
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] - mid - 1 >= k) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo  = mid + 1;
            }
        }

        return ans + k;
    }
};