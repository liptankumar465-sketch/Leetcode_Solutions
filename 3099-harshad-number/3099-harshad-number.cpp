class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp = x; // store the original val of x
        int sum = 0;  // store the digits sum

        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        // if x is divisible by sum means integer is harshad no
        if(x % sum == 0) return sum;
        // if not 
        return -1;
    }
};