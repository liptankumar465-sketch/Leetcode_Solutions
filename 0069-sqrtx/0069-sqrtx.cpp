class Solution {
public:
    int mySqrt(int x) {
        int lo = 1, hi = x;
        int ans = -1;

        if (x < 2) return x;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (mid == x / mid)
                return mid;
            else if (mid < x / mid) {
                ans = mid;
                lo = mid + 1;
            } else
                hi = mid - 1;
        }

        return ans;

        // //-----------brute force-------------//
        // int ans = 0;
        // if (x < 2)
        //     return x;

        // for (int i = 1; i <= x / 2; i++) {
        //     if (i == x / i) {
        //         return i;
        //     }
        //     if (i > x / i)
        //         return i - 1;
        // }

        // return ans;
    }
};