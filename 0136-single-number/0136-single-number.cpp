class Solution {
    // int unique = 0;
    // // for each loop
    // for (auto val : nums) {
    //     unique ^= val;
    // }
    // return unique;
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        for (const auto& pairs : freq) {
            if (pairs.second == 1)
                return pairs.first;
        }

        return -1;
    }
};