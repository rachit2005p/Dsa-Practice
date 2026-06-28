class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // Correctly handle cases where d >= n

        // 1. Reverse the first d elements
        reverse(arr.begin(), arr.begin() + d);

        // 2. Reverse the remaining n - d elements
        reverse(arr.begin() + d, arr.end());

        // 3. Reverse the entire array
        reverse(arr.begin(), arr.end());
    }
};