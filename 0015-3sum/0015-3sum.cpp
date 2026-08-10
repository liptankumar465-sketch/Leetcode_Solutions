class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        // first sort the nums
        sort(nums.begin(), nums.end());
        // fixed the one index
        for (int i = 0; i < n - 2; i++) {
            // ignore the duplicates for i
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue;
            // first index element can't be possitive
            if (nums[i] > 0)
                break;
            // aother pointers
            int left = i + 1, right = n - 1;

            while (left < right) {
                long sum = (long)nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // ignore the duplicates for left
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    // ignore the duplicates for right
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return result;
    }
};