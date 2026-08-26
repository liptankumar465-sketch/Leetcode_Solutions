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
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sort the nums
        // 1 1 2 3
        // i j
        // i == j duplicate are present

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }

        return false;
    }
};