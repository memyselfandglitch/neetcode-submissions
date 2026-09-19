class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int sz=(r-l)*min(heights[l],heights[r]);
        //we just need the last el >= curr l
        while(l<=r){
            sz=max(sz,(r-l)*min(heights[l],heights[r]));
            while(heights[r]<heights[l]){
                sz=max(sz,(r-l)*heights[r]);
                r--;
            } 
            sz=max(sz,(r-l)*min(heights[l],heights[r]));
            l++;
            r=heights.size()-1;
        }
        return sz;
    }
};
