class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = -1;
        int smax= -1;
        for(int i =0;i<arr.size();i++){
            if(max<arr[i]){
                smax=max;
                max=arr[i];
                
            }
            else if(smax<arr[i]&&arr[i]!=max){
              smax=arr[i];
          }
        }
        return smax;
    }
};