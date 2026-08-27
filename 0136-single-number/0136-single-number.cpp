class Solution {
    // int unique = 0;
    // // for each loop
    // for (auto val : nums) {
    //     unique ^= val;
    // }
    // return unique;
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;  // cerating a map for count each ele freq

        for (int num : nums) { // stores all eles and each freq
            freq[num]++;
        }

        for (const auto& pairs : freq) { 
            if (pairs.second == 1) // if any ele have only one freq mean this is uniqe ele
                return pairs.first;
        }

        return -1;
    }
};