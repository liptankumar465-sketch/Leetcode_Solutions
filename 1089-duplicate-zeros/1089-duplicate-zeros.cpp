class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();
        vector<int> result(n);
        int i = 0;
        int j = 0;
        while (j < n) {
            if (arr[i] != 0) {
                result.push_back(arr[i]);
            } else {
                result.push_back(0);
                j++;
                result.push_back(0);
            }
            i++;
            j++;
        }

        for (int i = n; i < 2 * n; i++) {
            arr[i - n] = result[i];
        }
    }
};