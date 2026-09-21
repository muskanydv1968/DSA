class SummaryRanges {
public:
map<int,int>mp;
    SummaryRanges() {
        mp.clear();
        
    }
    
    void addNum(int value) {
        int left=value;
        int right=value;
        auto justbada = mp.upper_bound(value);
        auto justchota = justbada;
        if (justchota != mp.begin()) {
            justchota--;
      
            if (justchota->second >= value) {
                return;
            }

            if (justchota->second == value - 1) {
                left = justchota->first;
            }
        }

       
        if (justbada != mp.end()) {

            if (justbada->first == value + 1) {
                right = justbada->second;
                mp.erase(justbada);
            }
        }

        mp[left] = right;
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>result;
        for(auto &it:mp){
            result.push_back({it.first,it.second});

        }
        return result;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */