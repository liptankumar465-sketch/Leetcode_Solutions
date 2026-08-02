class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        int n = nums.size();
        
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; ++i) {
            // Early exit: if the smallest fixed number is positive, 
            // no three numbers can sum to 0
            if (nums[i] > 0) break;
            
            // Skip duplicate outer anchors
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int l = i + 1;
            int r = n - 1;
            
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                
                if (sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    
                    // Skip duplicates for the left pointer
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    // Skip duplicates for the right pointer
                    while (l < r && nums[r] == nums[r - 1]) r--;
                    
                    // Move pointers to the next new elements
                    l++;
                    r--;
                } else if (sum < 0) {
                    l++; // Need a larger sum
                } else {
                    r--; // Need a smaller sum
                }
            }
        }
        
        return ans;

    }
};