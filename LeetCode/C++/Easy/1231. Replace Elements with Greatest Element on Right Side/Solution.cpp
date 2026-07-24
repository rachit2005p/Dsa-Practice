class Solution {
public
    vector<int> replaceElements(vector<int>& arr) {
        int maxx = -1;
        int original=0;  
        for(int i = arr.size()-1;i>=0;i--){
                 original=arr[i];
                 arr[i]=maxx;
                
                maxx=max(maxx,original);
                
            }return arr;
                  }
    
};