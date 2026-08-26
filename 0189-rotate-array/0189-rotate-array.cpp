class Solution {
    void revrse(vector<int>& v, int start, int end) {
        while (start < end) {
            swap(v[start], v[end]);
            start++;
            end--;
        }
    }

public:
    void rotate(vector<int>& nums, int k) {
        // 1 2 3 4 5 6 7
        // 7 6 5 4 3 2 1
        // ----- -------
        //   x      y       x = 0 to k - 1
        // 5 6 7 1 2 3 4    y = k to n - 1
        // ----- -------
        //   xr     yr

        int n = nums.size();
        if (k % n == 0) { // if k fully divid by n than nothing to do
            return;
        }

        k = k % n; // condition for less steps to do
        revrse(nums, 0, n - 1);
        revrse(nums, 0, k - 1);
        revrse(nums, k, n - 1);
    }
};