class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int size = nums.size();
        // sol by help of two pointers
        int i = 0;
        int j = 1;

        while (j < size) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }

        return i + 1 ;
    }
};