class Solution {
    // [1 2 2 1]
    // [2 2]
    // map nums1 => <{1:2}{2:2}>
    // map nums2 => <{2:2}>
    // res = [2,2] becouse freq of 2 is 2 in both maps

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
        // unordered_map<int, int> freq1; // nums1 freq
        // unordered_map<int, int> freq2; // nums2 freq

        // for (int num : nums1) { // put nums1 freq
        //     freq1[num]++;
        // }

        // for (int num : nums2) { // put nums2 freq
        //     freq2[num]++;
        // }

        // vector<int> res;
        // for (const auto& comman : freq1) {
        //     if ()
        // }
        // return res;
    }
};