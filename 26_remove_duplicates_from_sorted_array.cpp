class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a =0;
        int b =1;
        while(b<nums.size()){
          if(nums[a]==nums[b]){
            b++;
          }  
          else{
            nums[++a]= nums[b];
          }
        }return a+1;
    }
};