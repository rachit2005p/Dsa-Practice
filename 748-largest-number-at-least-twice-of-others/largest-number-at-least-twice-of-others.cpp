#include <vector>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        int max1 = -1; // Largest element
        int max2 = -1; // Second largest element
        int maxIndex = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                maxIndex = i;
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }

        // Check if the largest is at least twice the second largest
        return (max1 >= 2 * max2) ? maxIndex : -1;
    }
};
      
    
