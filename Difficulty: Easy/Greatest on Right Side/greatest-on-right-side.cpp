class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int maxx =-1;
        int n =arr.size();
        int original =0;
        for(int i =n-1;i>=0;i--){
            original = arr[i];
            arr[i]=maxx;
            maxx=max(maxx,original);
        }return arr;
    }
};