class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int ans_sz = n * 2;
        vector<int> ans(ans_sz);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }

        return ans;
    }
};