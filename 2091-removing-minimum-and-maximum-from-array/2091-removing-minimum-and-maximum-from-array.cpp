class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX, minIdx;
        int max = INT_MIN, maxIdx;

        for (int i = 0; i < n; i++) {
            // find max ele index
            if (nums[i] > max) {
                max = nums[i];
                maxIdx = i;
            }
            // find min ele index
            if (nums[i] < min) {
                min = nums[i];
                minIdx = i;
            }
        }
        // c1: removeing from left side
        int leftSteps;
        if (maxIdx > minIdx) {
            leftSteps = maxIdx + 1;
        } else {
            leftSteps = minIdx + 1;
        }

        // c2: removeing from righ side
        int rightSteps;
        if (n - maxIdx > n - minIdx) {
            rightSteps = n - maxIdx;
        } else {
            rightSteps = n - minIdx;
        }

        // c3: removeing from both side
        int bothSteps;
        if (minIdx < maxIdx) {
            bothSteps = minIdx + (n - maxIdx) + 1;
        } else {
            bothSteps = maxIdx + (n - minIdx) + 1;
        }

        // last we find which case has less steps
        if (leftSteps <= rightSteps && leftSteps <= bothSteps)
            return leftSteps;
        else if (rightSteps <= leftSteps && rightSteps <= bothSteps)
            return rightSteps;
        else
            return bothSteps;
    }
};