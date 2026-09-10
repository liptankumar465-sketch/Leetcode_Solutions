class Solution {

    bool numbersHasEvenDigit(int num) {
        int countDigits = 0;
        while (num != 0) {
            countDigits++;
            num /= 10;
        }
        return countDigits % 2 == 0;
    }

public:
    int findNumbers(vector<int>& nums) {
        int evenDigits = 0;
        for (int num : nums) {
            if (numbersHasEvenDigit(num)) {
                evenDigits++;
            }
        }

        return evenDigits;

        //---------second way converting into str----------//

        // int evenDigitsCount = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     string str_digit = to_string(nums[i]);
        //     if (str_digit.length() % 2 == 0) {
        //         evenDigitsCount++;
        //     }
        // }

        // return evenDigitsCount;
    }
};