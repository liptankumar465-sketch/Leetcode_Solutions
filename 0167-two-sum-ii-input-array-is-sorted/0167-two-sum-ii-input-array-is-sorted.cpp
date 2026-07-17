// sol the Question using two pointers.
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;// start pointer.
        int right = numbers.size() - 1;// end pointer.

        while (left < right) {
            int current_sum = numbers[left] + numbers[right];

            if (current_sum == target) {
                return {left + 1, right + 1}; // Found the indices
            } else if (current_sum < target) {
                left++; // Move left pointer rightward to get a larger sum
            } else {
                right--; // Move right pointer leftward to get a smaller sum
            }
        }

        return {}; // Return empty if no pair is found
    }
};