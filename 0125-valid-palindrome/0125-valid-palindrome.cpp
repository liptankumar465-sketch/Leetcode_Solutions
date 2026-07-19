class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {

            // to check left pointed ele is letter or num.
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            // to check right pointed ele is letter or num.
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            // to check string is palindrom or not.
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};