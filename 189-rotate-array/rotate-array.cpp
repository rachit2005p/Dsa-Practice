class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Essential to handle cases where k >= n
        
        // 1. Reverse the entire array just like you did
        reverse(nums.begin(), nums.end());
        
        // 2. Instead of mixing up indices, use a clean loop 
        // to swap the elements within the first k elements to fix them
        int i = 0;
        int j = k - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        // 3. Do the same for the remaining elements from index k to n-1
        i = k;
        j = n - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};