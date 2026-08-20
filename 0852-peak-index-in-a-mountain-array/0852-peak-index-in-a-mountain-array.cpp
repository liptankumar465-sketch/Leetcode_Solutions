class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //-----------brute force--------------//
        int peck_element = INT_MIN;
        int ans = -1;

        for (int peck_index = 0; peck_index < arr.size(); peck_index++) {
            if (arr[peck_index] > peck_element) {
                peck_element = arr[peck_index];
                ans = peck_index;
            }
        }

        return ans;
    }
};