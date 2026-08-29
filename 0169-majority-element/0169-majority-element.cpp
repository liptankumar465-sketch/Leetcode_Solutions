class Solution {
    
    //  int sz = nums.size();
    // int maj_size = sz / 2;

    // for (int i = 0; i < sz; i++) {
    //     int count = 0;
    //     for (int j = 0; j < sz; j++) {
    //         if (nums[i] == nums[j]) {
    //             count++;
    //         }
    //     }
    //     if (count > maj_size) {
    //         return nums[i];
    //     }
    // }
    // return -1;
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        for (auto& pairs : freq) {
            if (pairs.second > nums.size() / 2)
                return pairs.first;
        }

        return -1;
    }
};