class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> seen1; // contains nums1 ele
        set<int> seen2; // contains nums2 ele

        for (int num : nums1) { // insert all nums1 ele
            seen1.insert(num);
        }

        for (int num : nums2) { // insert all nums2 ele
            seen2.insert(num);
        }

        vector<int> res; // store the only comman eles
        for (const auto& comman : seen1) {
            if (seen2.contains(comman)) { // if set1 or set2 contains commans eles than push in res
                res.push_back(comman);
            }
        }

        return res;
    }
};