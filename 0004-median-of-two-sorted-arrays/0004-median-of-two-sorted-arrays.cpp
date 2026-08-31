class Solution {
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
        vector<int> res = margeArray(nums1, nums2);
        // find mid
        int n = res.size();

        if (n % 2 == 1) {
            return static_cast<double>(res[n / 2]);
        }

        int mid1 = res[n/2];
        int mid2 = res[n/2 - 1];

        return (static_cast<double>(mid1) + static_cast<double>(mid2) )/ 2;
    }
};