// sol by help of two pointers
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        /*
            1 2 3 3 4 -> 1 2 3 4
              i
              j
        */

        int j = 1;
        for(int i= 1;i<nums.size();i++){
            if (nums[i] !=nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }

        return j;

        
        // int n = nums.size();
        // int left = 0;
        // int right = 1;

        // while (right < n) {

        //     if (nums[left] != nums[right]) {
        //         left++;
        //         nums[left] = nums[right];
        //     }
        //     right++;
        // }

        // return left + 1;
    }
};