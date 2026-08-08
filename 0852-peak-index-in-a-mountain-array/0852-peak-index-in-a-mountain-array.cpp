class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int peck_element = INT_MIN;
        int low = 0, high = arr.size() - 1;

        for(auto mountain : arr) {
            peck_element = max(mountain, peck_element);
        }
        
        for(int i=0;i<arr.size();i++) {
            if (arr[i] == peck_element) return i;
        }
        // while(low < high) {

        //     int peck_index = low + (high-low)/2;
            
        //     if (arr[peck_index] == peck_element) return peck_index;
        //     else if (arr[peck_index] < peck_element) low = peck_index + 1;
        //     else high = peck_index - 1;

        // }

        return -1;
    }
};