class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            // calculate current width and min height.
            int width = right - left;
            int current_height = min(height[left], height[right]);
            
            // update the maximum water found so far.
            int current_water = width * current_height;
            max_water = max(max_water, current_water);

            // move the pointer that points to the shorter line.
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_water;
    }
};