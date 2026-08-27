class Solution {
    // [1 2 2 1]
    // [2 2]
    // ---sort first------
    // [1 1 2 2]
    //        i
    // [2 2]
    //    j
    // res => [2 2] becouse of [i] and [j] are 2 times equal

public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end()); // [1 2 2 1] -> [1 1 2 2]
        sort(nums2.begin(),nums2.end()); // [2 2]     -> [2 2]

        vector<int> res;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                res.push_back(nums1[i]);
                i++,j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }else {
                j++; 
            }
        }
        return res;
    }
};