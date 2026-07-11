class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int curfreq=0;
       int maxx=0;
       for(int i =0;i<nums.size();i++){
        if(nums[i]==1){
            curfreq++;
            maxx=max(maxx,curfreq);
        }
        else{
            curfreq=0;
        }
       }return maxx;

       
    }
};