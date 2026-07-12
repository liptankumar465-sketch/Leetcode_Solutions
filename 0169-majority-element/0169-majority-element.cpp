class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        int maj_size = sz / 2;

        for (int i = 0; i < sz; i++) {
            int count = 0;
            for (int j = 0; j < sz; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > maj_size) {
                return nums[i];
            }
        }
        return -1;
    }
};