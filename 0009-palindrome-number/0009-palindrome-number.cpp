class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> givenNum;

        if (x < 0) return false;
        
        while (x > 0) {
            int lastDigit = x % 10;
            x = x/10;
            givenNum.push_back(lastDigit);
        }

        int n = givenNum.size();

        int left = 0, right = n - 1;

        while (left < right) {

            if (givenNum[left] != givenNum[right]) {
                return false;

            } else {
                left++;
                right--;
            }
        }

        return true;
    }
};