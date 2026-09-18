class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2!=0){
            return {};
        }
        sort(begin(changed),end(changed));
        map<int,int>mp;
        for(auto &it:changed){
            mp[it]++;
        }
        vector<int>result;
        for(auto &it:changed){
            int twice=2*it;
            if(mp[it]==0)continue;
            if(mp.find(twice)==mp.end()||mp[twice]==0){
                return {};
            }
            result.push_back(it);
            mp[it]--;
            mp[twice]--;
        }
        return result;
    }
};