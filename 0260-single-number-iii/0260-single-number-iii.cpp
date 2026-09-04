class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        vector<int> result;
        // for (auto& pair : freq) {
        //     if (pair.second == 1)
        //         result.push_back(pair.first);
        // }
        for(auto& [num, count]: freq){
            if (count == 1){
                result.push_back(num);
            }
        }

        return result;
    }
};