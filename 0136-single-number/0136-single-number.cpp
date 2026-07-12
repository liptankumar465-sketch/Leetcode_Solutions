class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique = 0;
        // for each loop
        for (int val : nums) {
            unique ^= val;
        }
        return unique;
    }
};