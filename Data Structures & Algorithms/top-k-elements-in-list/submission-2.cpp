class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> cnt;

        for (auto x : nums)
            cnt[x]++;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>minHeap;
        for(auto x :cnt){
            minHeap.push({x.second,x.first});
            if(minHeap.size()>k)minHeap.pop();
        }
        vector<int>ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};