class Solution {
    // 1 2 3 1
    // i     j
    // i == j duplicates are present

    // for (int i = 0; i < nums.size() - 1; i++) {
    //      for (int j = i + 1; j < nums.size(); j++) {
    //          if (nums[i] == nums[j]) {
    //              return true;
    //          }
    //      }
    //  }
    // return false;
    //-------------------------------------------------
    //   sort(nums.begin(), nums.end()); // sort the nums
    // 1 1 2 3
    // i j
    // i == j duplicate are present

    // for (int i = 0; i < nums.size() - 1; i++) {
    //     if (nums[i] == nums[i + 1]) {
    //         return true;
    //     }
    // }

    // return false;
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> seen; // cerate a set for stores elements
        // seen<{1 2 3 1}> if any ele appare more than one return true;
        for (int num : nums) {
            if (seen.contains(num)) {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};