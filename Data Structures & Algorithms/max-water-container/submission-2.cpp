class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int sz=0;
        //we just need the last el >= curr l
        while(l<r){
            sz=max(sz,(r-l)*min(heights[l],heights[r]));
            if(heights[l]<=heights[r])l++;
            else r--;

        }
        return sz;
    }
};
