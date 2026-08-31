class Solution {
    // function for marge two sorted arr
    vector<int> margeArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> result;

        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                result.push_back(nums1[i++]);
            } else {
                result.push_back(nums2[j++]);
            }
        }

        while (i < n1) {
            result.push_back(nums1[i++]);
        }

        while (j < n2) {
            result.push_back(nums2[j++]);
        }

        return result;
    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // call the marge function
        vector<int> res = margeArray(nums1, nums2);
        int n = res.size(); // total elements in marge sorted arr

        // if total ele no is odd then
        if (n % 2 == 1) {
            return static_cast<double>(res[n / 2]); // direct return mid idx ele
        }

        // if total ele no is even then
        int mid1 = res[n/2]; // find mid idx ele
        int mid2 = res[n/2 - 1]; // find mid - 1 idx ele

        return (static_cast<double>(mid1) + static_cast<double>(mid2) )/ 2;
    }
};