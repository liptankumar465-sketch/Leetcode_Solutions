class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            
            // Overflow check BEFORE multiplying/adding
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;
            
            rev = rev * 10 + digit;
        }
        return rev;
        // int rev = 0;
        // while (x != 0) {
        //     int digit = x % 10;
        //     x /= 10;

        //     // check overflow conditions
        //     if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rev > 7)){
        //         return 0;
        //     }
        //     if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rev < -8)){
        //         return 0;
        //     }

        //     rev = rev*10 + digit;
        // }

        // return rev;
    }
};