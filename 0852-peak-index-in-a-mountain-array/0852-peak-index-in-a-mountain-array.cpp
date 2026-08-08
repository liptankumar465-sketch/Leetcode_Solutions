class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int peck_element = INT_MIN;

        for (auto mountain : arr) {
            peck_element = max(mountain, peck_element);
        }

        for (int peck_index = 0; peck_index < arr.size(); peck_index++) {
            if (arr[peck_index] == peck_element)
                return peck_index;
        }

        return -1;
    }
};