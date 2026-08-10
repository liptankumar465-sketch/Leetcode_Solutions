class Solution {
public:
    bool isPalindrome(int x) {
        // firsr convert given x into string givenNum
        // by to_string() IN-BUILD FUNCTION
        string givenNum = to_string(x);
        int n = givenNum.size(); // size

        // creat two pointers to compare x is palindrome or not
        int left = 0, right = n - 1;

        while (left < right) {
            if (givenNum[left] != givenNum[right])
                return false;
            else
                left++;
            right--;
        }
        return true;
        
        //---------brute force examp---------//
        // vector<int> givenNum;

        // if (x < 0) return false;

        // while (x > 0) {
        //     int lastDigit = x % 10;
        //     x = x/10;
        //     givenNum.push_back(lastDigit);
        // }

        // int n = givenNum.size();

        // int left = 0, right = n - 1;

        // while (left < right) {

        //     if (givenNum[left] != givenNum[right]) {
        //         return false;

        //     } else {
        //         left++;
        //         right--;
        //     }
        // }
        // return true;
    }
};