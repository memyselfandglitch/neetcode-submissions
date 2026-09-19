class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int>ans(n,0);
        stack<pair<int,int>>st;//temp,ind
        for(int i=0;i<n;i++){
            while (!st.empty()&&t[i]>st.top().first){
                pair<int,int>p=st.top();
                st.pop();
                ans[p.second]=i-p.second;
            }
            st.push({t[i],i});
        }
        return ans;
    }
};
