class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        vector<int>ans(2,-1);
        int start = 0;
        int end = arr.size()-1;
        //if(arr.size()==0)return ans;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==x){
                ans[0]=mid;
                end=mid-1;
            }
            else if(arr[mid]>x){
                end= mid-1;
            }
            else{
                start=mid+1;
            }
        }
       start = 0;
       end = arr.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==x){
                ans[1]=mid;
                start=mid+1;
            }
            else if(arr[mid]>x){
                end= mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        
        
        return ans;
    }
};
    