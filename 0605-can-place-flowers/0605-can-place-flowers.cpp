class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0; // count planted flow
        for (int i = 0; i < flowerbed.size(); i++) {
            // check ith plot is empty
            if (flowerbed[i] == 0) {
                // check left or right plots are empty
                bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRightPlot =
                    (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
                // if left and right plots are empty than plant the flow
                if (emptyLeftPlot && emptyRightPlot) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }

        return count >= n;
    }
};