class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            // Calculate current width and height
            int width = right - left;
            int current_height = min(height[left], height[right]);
            
            // Update maximum area found so far
            max_water = max(max_water, current_height * width);

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_water;
    }
};