class Solution {
public:
    int largest(vector<int> &piles){
        int max=piles[0];
        for(int i=0;i<piles.size();i++){
            if(max<piles[i]){
            max=piles[i];
            }
        }return max;
    }

    long long totalhours(vector<int> &piles,int k){
        long long totalhour=0;
        for(int i =0;i<piles.size();i++){
            totalhour+= ceil(double(piles[i])/double(k));
        }return totalhour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int end =largest(piles);
        int ans;
        while(low<=end){
            int mid= (low+end)/2;
            long long total = totalhours(piles , mid);
            if(total<=h){
                ans=mid;
                end=mid-1;
            }
            else{
                low=mid+1;
            }
        
        }
return ans;
    }
};