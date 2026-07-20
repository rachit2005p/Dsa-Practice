class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = nums[0];
        int maxx=-1;
        int dif=-1;

        for(int i =1;i<nums.size();i++){
            if(min<nums[i]){
                dif=nums[i]-min;
                
            }else{
                min=nums[i];
            }
   


            
            maxx=max(dif,maxx);
        }

        return maxx;
    }
};