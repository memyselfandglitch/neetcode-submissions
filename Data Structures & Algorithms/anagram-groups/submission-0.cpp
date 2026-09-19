class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto &str:strs){
            string temp="";
            vector<char>arr;
            for(auto &ch:str){
                arr.push_back(ch);
            }
            sort(arr.begin(),arr.end());
            for(auto i:arr)temp=i+temp;
            mp[temp].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
