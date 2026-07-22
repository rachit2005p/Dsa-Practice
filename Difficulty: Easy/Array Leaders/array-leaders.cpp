class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxx = arr[n-1];
         vector<int> ans;
         ans.push_back(maxx);
        for(int i =n-2;i>=0;i--){
            if(arr[i]>=maxx){
                maxx = arr[i];
                ans.push_back(maxx);
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};