class TimeMap {
public:
    map<string,map<int,string>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        if(mp[key].find(timestamp)!=mp[key].end())return mp[key][timestamp];
        auto itr=mp[key].upper_bound(timestamp);
        return itr ==mp[key].begin()?"":prev(itr)->second;
    }
};
