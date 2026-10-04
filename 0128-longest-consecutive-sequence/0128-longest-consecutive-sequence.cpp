class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        int count = 1, max_count = 1;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i + 1] == nums[i] + 1) {
                count++;
                max_count = max(count, max_count);

            } else if (nums[i + 1] > nums[i]) {
                count = 1;
            } else {
                continue;
            }
        }

        return max_count = max(count, max_count);
    }
};