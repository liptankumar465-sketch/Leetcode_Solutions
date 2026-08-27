class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i] += 1;
                return digits;
            }
        }
        // if index exccid
        vector<int> result(digits.size() + 1);
        result[0] = 1;
        return result;

        //---------not truly correct------------//
        // int x = 0;
        // for (int i = digits.size() - 1; i >= 0; i--) {
        //     x = x * 10 + digits[i];
        // }
        // int temp = 0;
        // while (x != 0) {
        //     int digit = x % 10;
        //     temp = temp * 10 + digit;
        //     x /= 10;
        // }

        // temp = temp + 1;
        // int original = 0;
        // while (temp != 0){
        //     int digit = temp % 10;
        //     original = original * 10 + digit;
        //     temp /= 10;
        // }

        // vector<int> result;
        // while (original != 0){
        //     result.push_back(original % 10);
        //     original /= 10;
        // }
        // return result;
    }
};