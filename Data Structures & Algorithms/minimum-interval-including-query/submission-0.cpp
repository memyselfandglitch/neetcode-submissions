class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        sort(intervals.begin(),intervals.end());
        int i=0;
        vector<int>sorted;
        for(auto x:queries)sorted.push_back(x);
        unordered_map<int,int>mp;
        sort(sorted.begin(),sorted.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>hp;
        for(auto x:sorted){
            while(i<intervals.size()&&intervals[i][0]<=x){
                hp.push({intervals[i][1]-intervals[i][0]+1,intervals[i][1]});
                i++;
            }
            while(hp.size()&&hp.top().second<x)hp.pop();
            if(hp.size())mp[x]=hp.top().first;
            else mp[x]=-1;
        }
        vector<int>ans;
        for(auto x:queries){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
