class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        
        // 1. Find the absolute highest number of candies in the array
        int greatest = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > greatest) {
                greatest = candies[i];
            }
        }
        
        // 2. Compare each kid's new total to that maximum
        for (int i = 0; i < candies.size(); i++) {
            int maxx = candies[i] + extraCandies;
            if (maxx >= greatest) {
                result[i] = true; 
            } else {
                result[i] = false; 
            }
        }
        
        return result; 
    }
};