class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n==1)return true;
        bool dec = true;
        bool inc = true;
        
        for(int i =0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                inc = false;
            }
            if(arr[i]<arr[i+1]){
                dec = false;
            }
            if(!inc && !dec){
                return false;
            }            
        }
        return true;
    }
};