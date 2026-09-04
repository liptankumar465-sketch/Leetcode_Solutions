class Solution {
    bool digitSquarSum(int n) {
        if (n == 1 || n == 7)
            return true;
        if (n < 10)
            return false;
        int sum = 0;
        while (n != 0) {
            int digit = n % 10;
            sum += pow(digit, 2);
            n /= 10;
        }

        return digitSquarSum(sum);
    }

public:
    bool isHappy(int n) {
        if (digitSquarSum(n)) {
            return true;
        }

        return false;
    }
};