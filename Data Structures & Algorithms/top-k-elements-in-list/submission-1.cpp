class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> cnt;

        for (auto x : nums)
            cnt[x]++;

        vector<pair<int, int>> freq;

        for (auto &itr : cnt) {
            freq.push_back({itr.second, itr.first});
        }

        sort(freq.rbegin(), freq.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};