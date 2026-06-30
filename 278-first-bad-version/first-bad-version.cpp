// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long  start =1;
        long long end =n;
        long long ans =0;
        while(start<=end){  
            long long  mid = (end+start)/2;
            if(isBadVersion(mid)){
                ans = mid; 
                end = mid-1;
            }else{
                start= mid+1;
            }
        }return ans;        
    }
};