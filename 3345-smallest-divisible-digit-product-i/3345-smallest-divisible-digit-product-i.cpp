class Solution {
    int digitsProduct(int n) {
        int prod = 1;
        while (n != 0) {
            int digit = n % 10;
            prod *= digit;
            n /= 10;
        }

        return prod;
    }

public:
    int smallestNumber(int n, int t) {
        for (int i = n; i >= n; i++) {
            if (digitsProduct(i) % t == 0)
                return i;
        }

        return -1;
    }
};