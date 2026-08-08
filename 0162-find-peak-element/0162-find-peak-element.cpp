class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int peckElement = INT_MIN;
        
        for(auto &val : nums) {
            peckElement = max(val, peckElement);
        }

        for(int peckIndex=0;peckIndex<nums.size();peckIndex++) {
            if (nums[peckIndex] == peckElement) return peckIndex;
        }

        return -1;
    }
};