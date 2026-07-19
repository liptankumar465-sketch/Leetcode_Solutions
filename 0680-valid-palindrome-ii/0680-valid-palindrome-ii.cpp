class Solution {
// create supperPower.
public:
    bool palindromeOrNot(int left, int right, string s) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {

            if (s[left] != s[right]) {
                // use the supperPower
                return palindromeOrNot(left + 1, right, s) ||
                       palindromeOrNot(left, right - 1, s);
            } else {
                left++;
                right--;
            }
        }
       return true;
    }
};