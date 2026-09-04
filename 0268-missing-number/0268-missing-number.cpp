class Solution {
// if ele has missing in nums
// nums = [3, 0, 1], numsSum = 3+0+1 = 4
// if ele has not missing nums
// nums = [1, 2, 3], actualSum = 1+2+3 = 6
// missin no = 6 - 4 = 2 return
public:
    int missingNumber(vector<int>& nums) {

        // int n = nums.size();
        // int numsSum = 0;
        // int actualSum = 0;

        // for (int i = 0; i < n; i++) {
        //     numsSum += nums[i];
        //     actualSum += i + 1;
        // }

        // return actualSum - numsSum;

        //--------brute force--------//
        int n =nums.size();
        int missing = 0;
        for(int i=0;i<n;i++){
            missing ^= nums[i];
            missing ^= i+1;
        }

        return missing;
    }
};