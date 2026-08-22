class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool inc = true; // defult true
        bool dec = true; // defult true

        for (int i = 0; i < n - 1; i++) {
            // check inc false condition
            if (nums[i] > nums[i + 1])
                inc = false;
            // check dec false condition
            if (nums[i] < nums[i + 1])
                dec = false;
        }
        // if one or both condition are true than return ture;
        if (inc == true || dec == true) {
            return true;
        }
        // if both condition are false than return false;
        return false;
    }
};