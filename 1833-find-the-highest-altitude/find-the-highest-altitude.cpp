class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxx=0,current=0;
        for(int i =0;i<gain.size();i++){
            current+=gain[i];
            maxx=max(maxx,current);
        }return maxx;
    }
};