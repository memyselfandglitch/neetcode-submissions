class Solution {
public:
    bool is_pos(int rate, const vector<int>& piles, int t){
        long long time=0;
        for(auto x:piles){
            time+=x/rate;
            if(x%rate!=0)time++;
        }
        return time<=t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi=1e9;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(is_pos(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
